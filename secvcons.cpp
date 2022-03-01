#include <iostream>
#include <string>
typedef unsigned long ulong;

using namespace std;

ulong maxi;
string txt;

bool vowel(char ch) {
    return ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u';
}

int main() {
    getline(cin, txt);
    txt.reserve(1);
    txt.push_back('a');

    const ulong DMAX = txt.size();

    ulong temp, nr = 0;
    for (ulong i = 0; i <= DMAX; ++i) {
        if (!vowel(txt[i]))
            ++nr;
        else {
            if (nr >= maxi) {
                maxi = nr;
                temp = i;
            }
            nr = 0;
        }
    }

    for (ulong i = temp - maxi; i < temp; ++i)
        cout << txt[i];

    return 0;
}