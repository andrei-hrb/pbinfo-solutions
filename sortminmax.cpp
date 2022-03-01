#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int n, input, nmin = INT_MAX, nmax, nminpos, nmaxpos;
std::vector<int> v;

int main() {
    std::cin >> n;
    v.reserve(n);

    for (int i = 0; i < n and std::cin >> input; ++i) {
        v.emplace_back(input);

        if (input > nmax) {
            nmax = input;
            nmaxpos = i;
        }

        if (input < nmin) {
            nmin = input;
            nminpos = i;
        }
    }
    
    if (nminpos > nmaxpos)
        std::swap(nminpos, nmaxpos);

    sort(v.begin() + nminpos, v.begin() + nmaxpos + 1);

    for (auto &i : v) std::cout << i << ' ';

    return 0;
}