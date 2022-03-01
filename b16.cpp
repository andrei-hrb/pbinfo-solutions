#include <iostream>
#include <string>

using namespace std;

int val(char c) {
    if (c >= '0' and c <= '9')
        return (int)(c- 48);
    return (int)(c - 55);
}

int deci(string str) {
    const int DMAX = str.size();
    int power = 1, nr = 0;

    for(int i = DMAX - 1; i >= 0; --i) {
        nr += val(str[i]) * power;
        power *= 16;
    }

    return nr;
}

string txt;

int main() {
    getline(cin, txt);

    cout << deci(txt);

    return 0;
}