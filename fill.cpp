#include <fstream>
#include <vector>

using namespace std;

int n, m, number;
bool visited[105][105], map[105][105];
vector<pair<int, int>> dirs = {
        make_pair(0, 1),
        make_pair(1, 0),
        make_pair(0, -1),
        make_pair(-1, 0),
};


bool is_safe(int x, int y) {
    return x >= 0 and y >=0 and x < n and y < m and !visited[x][y] and map[x][y];
}

void fill(int x, int y) {
    for (auto &dir : dirs) {
        int i = x + dir.first;
        int j = y + dir.second;
        if (is_safe(i, j)) {
            visited[i][j] = true;
            fill(i, j);
        }
    }
}

int main() {
    ifstream fin("fill.in");

    fin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            fin >> map[i][j];
        }
    }

    fin.close();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (!visited[i][j] and map[i][j]) {
                visited[i][j] = true;
                fill(i, j);

                ++number;
            }
        }
    }

    ofstream fout("fill.out");

    fout << number;

    fout.close();

    return 0;
}