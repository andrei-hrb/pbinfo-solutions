#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int n;
stack<int> s;
vector<int> a, b, sol;

int main() {
    cin >> n;

    int temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;

        a.reserve(1);
        a.emplace_back(temp);
    }

    for (int i = 0; i < n; ++i) {
        cin >> temp;

        b.reserve(1);
        b.emplace_back(temp);
    }

    temp = a.size() - 1;
    for (int i = temp; i >= 0; --i) {
        s.push(a[i]);
    }

    for (auto &i : b) {
        int steps = 0;
        stack<int> ss = s;

        while(! ss.empty()) {
            ++steps;

            if (ss.top() == i) {
                break;
            }

            ss.pop();
        }

        if (ss.empty()) {
            sol.reserve(1);
            sol.emplace_back(0);
        } else if (ss.top() == i) {
            for(int j = 0; j < steps; ++j) {
                s.pop();
            }

            sol.reserve(1);
            sol.emplace_back(steps);
        }
    }

    for (auto &i : sol) {
        cout << i << ' ';
    }

    return 0;
}
