#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;

        v.reserve(1);
        v.emplace_back(temp);
    }

    sort(v.begin(), v.end());

    for (auto &i : v) {
        cout << i << ' ';
    }

    return 0;
}