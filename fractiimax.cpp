#include <iostream>
#include <regex>

using namespace std;

bool check(int a, int b, int c, int d) {
    return double(a) / b > double(c) / d;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (check(a, b, c, d)) { // 1 - a, b
        int e = __gcd(a, b); // 0 - c, d
        cout << a / e << ' ' << b / e;
    } else {
        int e = __gcd(c, d);
        cout << c / e << ' ' << d / e;
    }

    return 0;
}