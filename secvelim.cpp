#include <iostream>
#include <stack>
#include <algorithm>
#include <string>

using namespace std;

string input, final;
char letter;
stack<char> stacky;

int main() {
    getline(cin, input);

    for (int i = 0; i < input.size(); ++i) {
        char temp = input[i];

        if (stacky.empty()) {
            stacky.push(temp);
            continue;
        }

        if (tolower(stacky.top()) == tolower(temp)) {
            stacky.pop();

            letter = temp;

            while (tolower(letter) == tolower(temp)) {
                temp = input[++i];
            }

            --i;
        } else {
            stacky.push(temp);
        }
    }

    while (!stacky.empty()) {
        final.push_back(stacky.top());
        stacky.pop();
    }

    reverse(final.begin(), final.end());

    cout << final;

    return 0;
}