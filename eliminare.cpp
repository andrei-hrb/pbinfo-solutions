#include <iostream>
#include <string>

using namespace std;

string txt;

int main() {
    getline(cin, txt);

    for (int i = 0; i < txt.size(); ++i) {
        for (int j = 0; j < txt.size(); ++j)
            if (j != i)
                cout << txt[j];
        cout << '\n';
    }

    return 0;
}