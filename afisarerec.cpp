#include <vector>
#include <algorithm>
void afis() {
    int n = 1;
    vector<int>v;
    while (n) {
        cin >> n;
        v.reserve(1);
        v.emplace_back(n);
    }
    reverse(v.begin(), v.end());
    for (auto &i : v)
        cout << i << ' ';
}