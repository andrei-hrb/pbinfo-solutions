#include <iostream>

using namespace std;

int n, k, mat[24][24];

int main() {
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i < k && j < k) mat[i][j] = 1;
            else if (i < k && j >= k) mat[i][j] = 2;
            else if (i >= k && j < k) mat[i][j] = 3;
            else mat[i][j] = 4;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << mat[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}
