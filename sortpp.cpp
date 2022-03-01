#include <iostream>
#include <vector>
#include <algorithm>

struct custom {
    int value;
    bool square;

    custom (int pseudoValue, bool pseudoSquare) : value(pseudoValue), square(pseudoSquare) {}
};

bool square(int n) {
    double sq = sqrt(n);

    return sq == (int)sq;
}

int n, input;
std::vector<int> w;
std::vector<custom> v;

int main() {
    std::cin >> n;
    v.reserve(n);

    for (int i = 0; i < n and std::cin >> input; ++i) {
        bool sq = square(input);

        v.emplace_back(custom(input, sq));

        if (sq) w.emplace_back(input);
    }

    sort(w.begin(), w.end());

    for (int i = 0, j =0; i < n; ++i)
        if (v[i].square) std::cout << w[j++] << ' ';
        else std::cout << v[i].value << ' ';

    return 0;
}