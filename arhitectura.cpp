#include <iostream>
#include <vector>
#include <algorithm>

int n, temp;
std::vector <int> v;

int main() {
    std::cin >> n;

    for (int i = 0; i < n and std::cin >> temp; ++i) v.reserve(1), v.emplace_back(temp);

    std::sort(v.begin(), v.end(), std::greater<int>());

    for (auto &i : v) std::cout << i << ' ';

    return 0;
}