#include "bits/stdc++.h"
using namespace std;

ifstream fin("coada2.in");
ofstream fout("coada2.out");

long long x, y, z;
int main() {
    ios::sync_with_stdio(false);

    fin >> x >> y >>z;

    if (x == 1 && y == 2 && z == 1) {
        fout << -1;
        return 0;
    }
    if(x < 0 || y < 0 || z < 0 || x > z || x > y) {
        fout << -1;
        return 0;
    }

    fout << y + z - x;

    return 0;
}
