#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<long long> s;

int main() {
    string str = "234-10+21*12";
    getline(cin, str);

    long long size = int(str.size());
    for (long long i = 0; i < size; ++i) {
        long long sign = 1;
        bool multiplier = false;
        long long number = 0;

        if (str[i] == '-' || str[i] == '+' || str[i] == '*') {
            if (str[i] == '*') {
                multiplier = true;
            }

            if (str[i] == '-') {
                sign = -1;
            }

            ++i;
        }

        while (str[i] >= '0' and str[i] <= '9') {
            number = number * 10 + int(str[i] - '0');
            ++i;
        }
        --i;

        number *= sign;

        if (multiplier) {
            s.top() = s.top() * number;
        } else {
            s.push(number);
        }
    }

    long long sum = 0;
    while (! s.empty()) {
        sum += s.top();

        s.pop();
    }

    cout << sum;

    return 0;
}
