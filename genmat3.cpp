#include <iostream>

using namespace std;

int n, m, global = 1;
int matrix[21][21];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = global * global;
            global += 2;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
