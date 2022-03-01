#include <iostream>
#include <vector>
#include <algorithm>

int n, temp;
std::vector<int> v;

int main() {
    std::cin >> n;

    for (int i = 0; i < n and std::cin >> temp; ++i) v.reserve(1), v.emplace_back(temp);

    for (int i = 0; i < n - 1; ++i)
        if ( std::__gcd(v[i], v[n - 1]) != 1) v.erase(v.begin() + i--), --n;

    sort(v.begin(), v.end() - 1, std::greater<int>());

    for (int i = 0; i < n - 1; ++i) std::cout << v[i] << ' ';

    return 0;
}