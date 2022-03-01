#include "bits/stdc++.h"
using namespace std;

int n, v[100001], d = 1, mid;

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    mid = n / 2 + 1;

    for (int i = 0; i < n; ++i)
        cin >> v[i];

    sort(v, v + n);

    for (int i = 0; i < n; ++i) {
        if (v[i] == v[i + 1])
            ++d;
        else {
            if (d >= mid) {
                cout << "DA " << v[i];
                return 0;
            }
            d = 1;
        }
    }

    cout << "NU";

    return 0;
}
