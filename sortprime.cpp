#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::vector;
using std::sort;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    } else {
        if (n < 4) {
            return true;
        } else {
            if ( ! (n % 2) or ! (n % 3))
             return false;
        }
    }

    int l = 5;

    while (l * l <= n) {
        if ( ! (n % l) or ! (n % (l + 2))) return false;

        l += 4;
    }

    return true;
}

int n, temp;
vector<int> v;

int main() {
    cin >> n;

    for (int i = 0; i < n and cin >> temp; ++i) if (isPrime(temp)) v.reserve(1), v.emplace_back(temp);

    sort(v.begin(), v.end());

    for (auto &i : v) cout << i << ' ';

    return 0;
}
