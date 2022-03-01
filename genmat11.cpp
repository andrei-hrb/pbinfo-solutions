#include <iostream>

using namespace std;

int n, mat[20][20];

int main() {
    cin >> n;

    int k = 2;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (k % 3) mat[i][j] = k;
            else j--;
            k += 2;
        }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << mat[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}
