#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int main() {
    int n, k;
    cin >> n >> k;

    int temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;

        v.reserve(1);
        v.emplace_back(temp);
    }

    sort(v.begin(), v.begin() + k);
    sort(v.begin() + k, v.end(), greater<int>());

    for(auto &i : v) {
        cout << i << ' ';
    }

    return 0;
}