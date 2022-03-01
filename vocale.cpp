#include <iostream>
#include <string>
using namespace std;

char v[21];

int main() {
    ios::sync_with_stdio(false);

    cin.get(v, 21);

    for (int i = 0; i <= 21; ++i) {
        if (v[i] == 'a') {
            v[i] = 'A';
            continue;
        }

        if (v[i] == 'e') {
            v[i] = 'E';
            continue;
        }

        if (v[i] == 'i') {
            v[i] = 'I';
            continue;
        }

        if (v[i] == 'o') {
            v[i] = 'O';
            continue;
        }

        if (v[i] == 'u') {
            v[i] = 'U';
            continue;
        }
    }

    cout << v;
    return 0;
}
