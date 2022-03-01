#include <iostream>

using namespace std;

int main() {
    int n, m, mat[24][24], k = 1;
    cin >> n >> m;

    for (int i = n - 1; i >= 0; i--)
        for (int j = m - 1; j >= 0; j--)
            mat[i][j] = k++;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << mat[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}
