#include "bits/stdc++.h"
using namespace std;

bool prime(int a) {
    if (a <= 1)
        return false;
    else {
        if (a <= 3)
            return true;
        else {
            if (a % 2 == 0 || a % 3 == 0)
                return false;
        }
    }

    int l = 5;

    while (l * l <= a) {
        if (a % l == 0 || a % (l + 2) == 0)
            return false;
        l += 4;
    }

    return true;
}

int n, m, c, input;

void citire() {

    cin >> n >> m;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) {
            cin >> input;
            if ((j + 1) % 2 == 1) {
                if (prime(input))
                    ++c;
            }
        }
}

void afisare() {
    cout << c;
}

int main() {
    ios::sync_with_stdio(false);

    citire();
                afisare();

    return 0;
}
