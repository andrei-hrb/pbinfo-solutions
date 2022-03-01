#include <fstream>
#include <queue>
#include <cstring>
#include <climits>
#include <iostream>

using namespace std;

ifstream fin("traversare.in");
ofstream fout("traversare.out");

bool map[1005][1005], visited[1005][1005];
int n, m, values[1005][1005], dx[] = {-1, 0, 0, 1}, dy[] = {0, -1, 1, 0}, mmax = INT_MAX;
queue<pair<int, int>> q;


bool is_safe(pair<int, int> p) {
    return p.first >= 0 and p.second >= 0 and p.first < n and p.second < m and ! visited[p.first][p.second] and ! map[p.first][p.second];
}

int main() {
    fin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            fin >> map[i][j];
        }
    }

    fin.close();

    for (int j = 0; j < m; ++j) {
        if (!map[0][j]) {

            q.push(make_pair(0, j));
            visited[0][j] = true;
            values[0][j] = 1;
        }
    }
    
    while (! q.empty()) {
        auto pos = q.front();
        q.pop();

        for (int i = 0; i < 4; ++i) {
            auto new_pos = make_pair(pos.first + dx[i], pos.second + dy[i]);

            if (is_safe(new_pos)) {
                if (new_pos.first == n - 1) {
                    if (values[pos.first][pos.second] + 1 < mmax) {
                        mmax = values[pos.first][pos.second] + 1;
                    }
                    break;
                }
                visited[new_pos.first][new_pos.second] = true;
                values[new_pos.first][new_pos.second] = values[pos.first][pos.second] + 1;

                q.push(new_pos);
            }
        }
    }

    fout << mmax << '\n';

    fout.close();

    return 0;
}
