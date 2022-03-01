#include "bits/stdc++.h"
using namespace std;

int n, input;

vector<int>neg;
vector<int>poz;

void citire() {
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> input;
        if (input < 0) {
            neg.reserve(1);
            neg.push_back(input);
        }
        else {
            poz.reserve(1);
            poz.push_back(input);
        }
    }
}

void scriere() {
    long long a = 1;
    long long b = 1;

    a *= *min_element(neg.begin(), neg.end());
    neg.erase(min_element(neg.begin(), neg.end()));
    a *= *min_element(neg.begin(), neg.end());

    b *= *max_element(poz.begin(), poz.end());
    poz.erase(max_element(poz.begin(), poz.end()));
    b *= *max_element(poz.begin(), poz.end());

    if (a > b)
        cout << a;
    else
        cout << b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    citire();  scriere();

    return 0;
}
