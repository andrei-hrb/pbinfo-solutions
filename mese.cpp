#include <cstdio>
#include <iostream>

using namespace std;

bool v[250][250];
int n, m, nr, maxi, p, o, k, r;

void citire() {
    cin >> n >> m;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> v[i][j];
}

void mese() {
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (v[i][j] == 1) {
                p = j;
                r = 0;
                while (v[i][p] == 1) {
                    ++p;
                    ++r;
                }
                
                k = i;
                o = 0;
                while (v[k][j] == 1) {
                    ++k;
                    ++o;
                }
                
                if (o * r > maxi)
                    maxi = o * r;
                    
                ++nr;

                for (int unu = i; unu < k; ++unu)
                    for (int doi = j; doi < p; ++doi)
                        v[unu][doi] = 0;

                }
}

void scriere() {
    cout << nr << ' ' << maxi << '\n';
    
}



int main()
{
    ios::sync_with_stdio(false);

    citire();
    mese();
    scriere();

    return 0;
}
