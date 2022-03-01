#include <iostream>
#include <vector>
#include <algorithm>

int n, temp, maxi, mpos;
std::vector<int> v;

int main() {
    std::cin >> n;

    for (int i = 0; i < n and std::cin >> temp; ++i) {
        v.reserve(1), v.emplace_back(temp);

        if (temp > maxi) {
            maxi = temp;
            mpos = i;
        }
    }

    sort(v.begin(), v.begin() + mpos);
    sort(v.begin() + mpos + 1, v.end(), std::greater<int>());

    for (auto &i : v) std::cout << i << ' ';

    return 0;
}