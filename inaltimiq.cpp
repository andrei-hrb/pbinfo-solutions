#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<pair<int, int>> v;

bool pair_sort(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    int n;
    cin >> n;

    int temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;

        v.reserve(1);
        v.emplace_back(make_pair(i + 1, temp));
    }

    sort(v.begin(), v.end(), pair_sort);

    for (auto &i : v) {
        cout << i.first << ' ';
    }

    return 0;
}

