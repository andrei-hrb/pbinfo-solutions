#include <iostream>
#include <fstream>
#define DMAX 1005

using namespace std;

ifstream fin("lac.in");
ofstream fout("lac.out");

int n, m, pen, iss;
bool map[DMAX][DMAX], visited[DMAX][DMAX];
int dir_i[] = {-1, 0, 0, 1};
int dir_j[] = {0, -1, 1, 0};

bool is_safe(int i, int j) {
    return i >= 0 and j >= 0 and i < n and j < m and map[i][j] and ! visited[i][j];
}

void dfs(int x, int y) {
    visited[x][y] = true;

    for (int i = 0; i < 4; ++i) {
        int new_i = x + dir_i[i];
        int new_j = y + dir_j[i];

        if (is_safe(new_i, new_j)) {
            dfs(new_i, new_j);
        }
    }
}

int main() {
    fin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            fin >> map[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        if (map[i][0] and ! visited[i][0]) {
            dfs(i, 0);
            ++pen;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (map[i][m - 1] and ! visited[i][m - 1]) {
            dfs(i, m - 1);
            ++pen;
        }
    }

    for (int j = 0; j < m; ++j) {
        if (map[0][j] and ! visited[0][j]) {
            dfs(0, j);
            ++pen;
        }
    }

    for (int j = 0; j < m; ++j) {
        if (map[n - 1][j] and ! visited[n - 1][j]) {
            dfs(n - 1, j);
            ++pen;
        }
    }

    for (int i = 1; i < n - 1; ++i) {
        for (int j = 1; j < m - 1; ++j) {
            if (map[i][j] and ! visited[i][j]) {
                dfs(i, j);
                ++iss;
            }
        }
    }

    fout << iss << ' ' << pen << '\n';

    fin.close();
    fout.close();

    return 0;
}