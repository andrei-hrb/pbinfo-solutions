#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string mainString;

int main() {
    getline(cin, mainString);

    for (size_t i = 0; i < mainString.size(); ++i)
        if (mainString[i] == '(') {
            ++i;

            string temp1;
            while (mainString[i] != ')') {
                temp1.reserve(1);
                temp1.push_back(mainString[i]);

                ++i;
            }
            ++i;

            int temp2 = 0;
            while (mainString[i] >= '0' and mainString[i] <= '9') {
                temp2 = temp2 * 10 + (mainString[i] - 48);
                ++i;
            }

            for (int j = 0; j < temp2; ++j)
                cout << temp1;

            --i;

        } else
            cout << mainString[i];

    return 0;
}