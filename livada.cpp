#include "bits/stdc++.h"

using namespace std;

int                             n;
int                         d = 1;
int                          maxi;
int                          mini;
int                             m;
int                           mid;
long long                       p;
long long               a[700005];

int main() {

    ifstream fin("livada.in");

    fin >> n >> m >> p;
    mid = m / 2 + 1;

    long long          v[n][m + 1];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            fin >> v[i][j];
        v[i][m] = 0;
    }

    fin.close();

    for(int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) {
                if (v[i][j] == v[i][j + 1])
                    ++d;
                else {
                    if (d > maxi)
                        maxi = d;
                    d = 1;
                }
            a[j] = v[i][j];
            if (j == m - 1) {
                sort (a, a + m);
                int e = 1;
                for (int l = 0; l <= j; ++l) {
                    if (a[l] == a[l + 1]) {
                        ++e;
                    } else {
                        if (e >= mid) {
                            ++mini;
                            break;
                        }
                        e = 1;
                    }
                }
            }
        }

    ofstream fout("livada.out");

    fout << mini << '\n' << maxi;

    fout.close();

    return 0;
}
