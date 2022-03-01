#include "bits/stdc++.h"
using namespace std;

int n, m;

vector<int>v;

void citire() {
    freopen("masini.in", "r", stdin);

    cin >> n >> m;

    int input;

    for (int i = 0; i < n; ++i) {
        cin >> input;
        v.reserve(1);
        v.push_back(input);
    }
}

void sortare() {
    sort(v.begin(), v.end());
}

int nr;
void greedy() {
    for (unsigned int i = 0; i < v.size(); ++i) {
        if (v[i] < m) {
            ++nr;
            m -= v[i];
        }
        else
            break;
    }
}

void scriere() {
    freopen("masini.out", "w", stdout);

    cout << nr;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    citire();  sortare();   greedy();   scriere();

    return 0;
}
