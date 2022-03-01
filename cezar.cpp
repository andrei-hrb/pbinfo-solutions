#include <iostream>
#include <string>

using namespace std;

int n;
string txt;

int main() {
    getline(cin, txt);
    cin >> n;

    const int DMAX = txt.size();

    for (int i = 0; i < DMAX; ++i)
        if (txt[i] >= 'A' and txt[i] <= 'Z') {
            int newch = txt[i] + n;

            if (newch > 'Z')
                newch = 'A' + (newch - 'Z' - 1);

            cout << (char)newch;
        } else {
            if (txt[i] >= 'a' and txt[i] <= 'z') {
                int newch = txt[i] + n;

                if (newch > 'z')
                    newch = 'a' + (newch - 'z' - 1);

                cout << (char)newch;
            } else
                cout << txt[i];
        }


    return 0;
}