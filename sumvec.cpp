#include <iostream>
#include <vector>

using namespace std;

long long v[1001];
long long divide(int low, int hi) {
    int m;
    long long d1, d2;
    if (low != hi) {
        m = (low + hi) / 2;
        d1 = divide(low, m);
        d2 = divide(m + 1, hi);

        return d1 + d2;
    } else
        return v[low];
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    cout << divide(0, n - 1);

    return 0;
}