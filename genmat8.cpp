#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;

    int m[n + 1][n + 1];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i % 2) m[i][j] = i;
            else m[i][j] = j;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << m[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}
