#include "bits/stdc++.h"
using namespace std;

ifstream fin("cautanrinmatrice.in");
ofstream fout("cautanrinmatrice.out");

int n, m, c, cnt = 1;
struct str{int nr, ip, jp;};
str v[1001000];

int cautare(str arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (arr[m].nr == x)
            return m;

        if (arr[m].nr < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);

    fin >> n >> m;

    int poz = 0;
    bool ok = 0;

    int k = m;

    for (int i = 1; i <= n * m; ++i) {
        if (ok == 0)
            fin >> v[i].nr;
        else {
            fin >> v[i + k - poz - 1].nr; --k;}

        v[i].ip = cnt;

        ++poz;
        if (ok == 0) 
            v[i].jp = poz;
        else 
            v[i].jp = k + 1;

        if (poz == m) {
            poz = 0;
            k = m;

            if (ok == 1)
                ok = 0;
            else
                ok = 1;

            ++cnt;
        }
    }

    fin >> c;
    int input;

    for (int i = 0; i < c; ++i) {
        fin >> input;
        int d = cautare(v, 1, n * m, input);

        if (d == -1)
            fout << 0;
        else
            fout << v[d].ip << ' ' << v[d].jp;

        fout << '\n';
    }

    fin.close();
    fout.close();

    return 0;
}

