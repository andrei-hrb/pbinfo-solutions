#include "bits/stdc++.h"
using namespace std;

long long n;
int main() {
    ios::sync_with_stdio(false);

    cin >> n;

    cout << n * (n - 3) / 2 << '\n' << 180 * (n - 2);

    return 0;
}
