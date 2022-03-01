#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::sort;

int n, k, temp;
vector<int> v;

int main() {
    cin >> n >> k;

    for (int i = 0; i < n and cin >> temp; ++i) v.reserve(1), v.emplace_back(temp);

    sort(v.begin(), v.begin() + k);
    sort(v.begin() + k, v.end(), std::greater<int>());

    for (auto &i : v) cout << i << ' ';

    return 0;
}