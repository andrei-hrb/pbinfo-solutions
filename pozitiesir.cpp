#include <iostream>

using namespace std;

bool ok = false;
int n, x, t, pos = 1;

int main() {
    cin >> n >> x;

    for (int i = 0; i < n; i++) {
        cin >> t;

        pos += t > x;
        if (t == x) {
            ok = true;
        }
    }

    if (ok) cout << pos;
    else cout << -1;

    return 0;
}
