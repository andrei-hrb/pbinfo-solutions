#include <iostream>
#include <string>

using namespace std;

string txt;

bool vowel(char ch) {
    return ch == 'a' or ch == 'A' or ch == 'e' or ch == 'E' or ch == 'i'
        or ch == 'I' or ch == 'o' or ch == 'O' or ch == 'u' or ch == 'U';
}

int posv, posc;

int main() {
    getline(cin, txt);
    const int DMAX = txt.size();

    for (int i = 0; i < DMAX; ++i)
        if (vowel(txt[i])) {
            posv = i;
            break;
        }

    for (int i = DMAX - 1; i > -1; --i)
        if (!vowel(txt[i])) {
            posc = i;
            break;
        }

    if (!posc or !posv) {
        cout << "IMPOSIBIL";
        return 0;
    }

    txt[posv] ^= txt[posc];
    txt[posc] ^= txt[posv];
    txt[posv] ^= txt[posc];

    cout << txt;

    return 0;
}