#include <iostream>

using namespace std;

int main() {
    short n, m, x, t, vec[400], k = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            cin >> t;

            if (i == 0 || j == 0 || i == (n - 1) || j == (m - 1))
                vec[k++] = t;
        }

    cin >> x;

    for (int i = 0; i < k; i++)
        if (vec[i] == x) {
            cout << "DA";

            return 0;
        }

    cout << "NU";

    return 0;
}
