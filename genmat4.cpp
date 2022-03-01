#include <iostream>

using namespace std;

int n;
int matrix[25][25];

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            matrix[i][j] = (i * j) % 10;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
