#include <iostream>

using namespace std;

int main() {
    short n, m; cin >> n >> m;

    int mat[n + 1][m + 1];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];

    int val = mat[n - 1][m - 1];

    for (int i = 0; i < n; i++)
        mat[i][0] = val, mat[i][m - 1] = val;
    for (int j = 0; j < m; j++)
        mat[0][j] = val, mat[n - 1][j] = val;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << mat[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}
