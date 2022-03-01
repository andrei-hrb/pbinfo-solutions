#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int nr;
string txt;
char v[] = "aieou";

bool vowel(char c) {
    return strchr(v, c);
}

int main() {
    getline(cin, txt);

    for (int i = 0; i < txt.size() - 1; ++i)
        if (vowel(txt[i]) and vowel(txt[i + 1]))
            ++nr;

    cout << nr;

    return 0;
}