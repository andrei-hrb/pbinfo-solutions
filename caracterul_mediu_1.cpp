#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int m, k;
string txt;

char v[] = "aeiou";
bool caracterBun(char ch) {
    return ch != ' ' and !strchr(v, ch) and (ch < 'A' or ch > 'Z');
}

int main() {
    getline(cin, txt);

    for (size_t i = 0; i < txt.size(); ++i)
        if (caracterBun(txt[i])) {
            m += (int)txt[i];
            ++k;
        }

    cout << ((char)((int)(m / k)));

    return 0;
}