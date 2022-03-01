#include <iostream>
#include <stack>
#include <vector>

using namespace std;

const string one   = "A B";
const string two   = "B C";
const string three = "A C";
int n, temp;
stack<int> a, b;
vector<string> sol;

int main() {
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> temp;
        a.push(temp);
    }

    temp = 1;
    while (temp <= n) {
        if (!a.empty())
            if (a.top() == temp) {
                a.pop();

                sol.reserve(1);
                sol.emplace_back(three);

                ++temp;
                continue;
            }

        if (!b.empty())
            if (b.top() == temp) {
                b.pop();

                sol.reserve(1);
                sol.emplace_back(two);

                ++temp;
                continue;
            }

        if (!a.empty()) {
            b.push(a.top());
            a.pop();

            sol.reserve(1);
            sol.emplace_back(one);
        } else {
            cout << "0";
            return 0;
        }
    }

    cout << sol.size() << '\n';
    for (auto &i : sol) {
        cout << i << '\n';
    }


    return 0;
}