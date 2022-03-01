#include <iostream>
#include <string>

using namespace std;

string txt;

int main() {
    getline(cin, txt);
    const int DMAX = txt.size();

    for (int i = 0; i < DMAX; ++i)
        if ((txt[i] >= 'a' and txt[i] <= 'z') or (txt[i] >= 'A' and txt[i] <= 'Z'))
            cout << txt[i];

    return 0;
}
