#include <iostream>

using namespace std;

int n, a[6][6];

int main() {
    cin >> n;

    for (int i = 0; i < 6; i++) {
        int cif = n % 10;
        for (int j = i + 1; j < 6; j++) {
            if (i == j) {
                a[i][j] = 0;
            } else {
                a[i][j] = cif;
                a[j][i] = cif;
            }
        }
        n /= 10;
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
