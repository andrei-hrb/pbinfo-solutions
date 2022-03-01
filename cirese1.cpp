#include "bits/stdc++.h"
using namespace std;

short                   n;
short                   m;
short                   k;
short       v[1005][1005];
short                  i1;
short                  i2;
short                 j11;
short                  j2;
long long   S[1005][1005];
long long               s;
long long            smax;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> k;

    for (short i = 1; i <= n; ++i)
        for (short j = 1; j <= m; ++j)
            cin >> v[i][j];


    for (short i = 1; i <= n; ++i)
        for (short j = 1; j <= m; ++j)
            S[i][j] = v[i][j] + S[i - 1][j] + S[i][j - 1] - S[i - 1][j - 1];

    for (short t = 0; t < k; ++t) {
        cin >> i1 >> j11 >> i2 >> j2;
        s = 0;
        s = S[i2][j2] - S[i1 - 1][j2] - S[i2][j11 - 1] + S[i1 - 1][j11 - 1];

        if (s > smax) {
            smax = s;
        }
    }

    cout << smax;

    return 0;
}
