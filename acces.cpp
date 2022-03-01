#include <queue>
#include <fstream>
#include <cstring>

using namespace std;

char input;
queue<pair<int, int>> q;
int n, m, values[1005][1005], di[] = {0, -1, 1, 0}, dj[] = {-1, 0, 0, 1};
bool map[1005][1005], visited[1005][1005];

bool is_safe(pair<int, int> p) {
    return p.first >= 0 and p.second >= 0 and p.first < n and p.second < m and map[p.first][p.second] and ! visited[p.first][p.second];
}

int main() {
    memset(values, -1, sizeof(values));

    ifstream cin("acces.in");

    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> input;

            if (input == '-') {
                map[i][j] = true;
                continue;
            }

            if (input == 'P') {
                q.push(make_pair(i, j));
                visited[i][j] = true;
                values[i][j] = 0;
            }
        }
    }

    cin.close();

    while (! q.empty()) {
        auto pos = q.front();
        q.pop();

        for (int i = 0; i < 4; ++i) {
            auto new_pos = make_pair(pos.first + di[i], pos.second + dj[i]);

            if (is_safe(new_pos)) {
                visited[new_pos.first][new_pos.second] = true;
                values[new_pos.first][new_pos.second] = values[pos.first][pos.second] + 1;

                q.push(new_pos);
            }
        }
    }

    ofstream cout("acces.out");

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << values[i][j] << ' ';
        }
        cout << '\n';
    }

    cout.close();

    return 0;
}
