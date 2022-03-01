#include "bits/stdc++.h"
using namespace std;

struct str{int k, val;};

int n;
str v[1005];

void citire() {
    freopen("proiecte.in", "r", stdin);

    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> v[i].val;
        v[i].k = i;
    }
}

void sortare() {
    bool ok;
    str aux;

    do {
        ok = false;

        for (int i = 1; i < n; ++i) {
            if (v[i].val > v[i + 1].val) {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;

                ok = true;
            }
        }
    } while (ok == true);
}

void scriere() {
    freopen("proiecte.out", "w", stdout);

    for (int i = 1; i <= n; ++i)
        cout << v[i].k << ' ';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    citire();  sortare();  scriere();

    return 0;
}
