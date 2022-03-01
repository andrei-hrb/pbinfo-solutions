#include "bits/stdc++.h"
using namespace std;

struct ef{int k, greutate, valoare; float eficient;};
ef v[1005];
int n, g;

void citire() {
    cin >> n >> g;

    for (int i = 0; i < n; ++i) {
        v[i].k = i + 1;
        cin >> v[i].greutate >> v[i].valoare;
        v[i].eficient = (float) v[i].valoare / v[i].greutate;
    }
}

void sortare() {
    bool ok = false;
    do {
        ok = false;
        ef aux;

        for (int i = 0; i < n - 1; ++i) {
            if (v[i].eficient < v[i + 1].eficient) {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;

                ok = true;
            }
        }
    } while (ok == true);
}

int j;
float m, s;

void greedy() {
    for (int i = 0; i < n && g != 0; ++i) {
        if (v[i].greutate <= (g - m)) {
            m += v[i].greutate;
            s += v[i].valoare;
        } else {
                float d = (float) (g - m) / v[i].greutate;
                m += (float) v[i].greutate * d;
                s += (float) v[i].valoare * d;
                g = 0;
        }
    }
}

void afisare() {
    cout << s;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    citire(); sortare(); greedy(); afisare();
    return 0;
}
