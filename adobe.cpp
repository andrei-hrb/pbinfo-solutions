#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int nr;
string temp;

int main() {
    getline(cin, temp);

    transform(temp.begin(), temp.end(), temp.begin(), ::tolower);

    for (int j = 0; j < temp.size() - 4; ++j) {
        bool a = 0, d = 0, o = 0, b = 0, e = 0;
        int v = 0; int c = 0; int joker = 0;
        for (int i = j; i < j + 5; ++i) {
            switch (temp[i]) {
                case 'a':
                    if (!a)
                        a = 1;
                    break;

                case 'd':
                    if (!d)
                        d = 1;
                    break;

                case 'o':
                    if (!o)
                        o = 1;
                    break;

                case 'b':
                    if (!b)
                        b = 1;
                    break;

                case 'e':
                    if (!e)
                        e = 1;
                    break;

                case '+':
                    ++c;

                    break;

                case '-':
                    ++v;
                    break;

                case '*':
                    ++joker;
                    break;

                default:
                    break;
            }
        }

        if (!a and v) {
            a = 1;
            --v;
        }

        if (!d and c) {
            d = 1;
            --c;
        }

        if (!o and v) {
            o = 1;
            --v;
        }

        if (!b and c) {
            b = 1;
            --c;
        }

        if (!e and v) {
            e = 1;
            --v;
        }

        if (!a and joker) {
            a = 1;
            --joker;
        }

        if (!d and joker) {
            d = 1;
            --joker;
        }

        if (!o and joker) {
            o = 1;
            --joker;
        }

        if (!b and joker) {
            b = 1;
            --joker;
        }

        if (!e and joker) {
            e = 1;
            --joker;
        }

        if (a and d and o and b and e)
            ++nr;
    }

    cout << nr;

    return 0;
}