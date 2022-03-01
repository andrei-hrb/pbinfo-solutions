#include "bits/stdc++.h"
using namespace std;

int n, k;
vector<int>v;

void citire() {

    cin >> n;

    int input;
    for (int i = 1; i <= n; ++i) {
        cin >> input;
        v.reserve(1);
        v.push_back(input);
    }

    cin >> k;
}

void sortare() {
    sort(v.begin(), v.end());
}

void greedy() {
    for (int i = 0; i < k; ++i) {
        v[i] = -v[i];
    }
}

int s;
void scriere() {

    for (unsigned int i = 0; i < v.size(); ++i)
        s += v[i];

    cout << s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    citire();  sortare();   greedy();  scriere();

    return 0;
}
