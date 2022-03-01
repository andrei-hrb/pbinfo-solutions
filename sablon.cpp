#include <iostream>
#include <string>
#include <cstring>

using namespace std;

char v[] = "aeiou";
bool vowel(char ch) {
    return strchr(v, ch);
}

string string1, string2;

int main() {
    cin >> string1 >> string2;

    for (int i = 0; i < string1.size(); ++i) {
        bool ok1 = vowel(string1[i]);
        bool ok2 = vowel(string2[i]);
        
        if (ok1 and ok2) {
            cout << "*";
            continue;
        } else {
            if (!ok1 and !ok2) {
                cout << "#";
                continue;
            } else
                cout << "?";
        }
    }

    return 0;
}