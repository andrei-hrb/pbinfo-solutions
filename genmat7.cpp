#include <iostream>

using namespace std;

int n, m[24][24];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i == j || j == n - 1 - i) m[i][j] = 0;
            else if (i < n / 2 && j > i && j < n - 1 - i) m[i][j] = 1;
            else if (i > n / 2 && j < i && j > n - 1 - i) m[i][j] = 2;
            else m[i][j] = 3;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << m[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}
