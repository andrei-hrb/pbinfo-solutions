#include <iostream>

using namespace std;

int actual_number, matrix[10][10], n = 0;

int main() {
    cin >> actual_number;

    while (actual_number != 0) {
        matrix[0][n++] = actual_number % 10;
        actual_number /= 10;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = matrix[0][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
