#include <iostream>
#include <string>
#include <algorithm>

typedef unsigned int uint;

using namespace std;

string txt;
int v[10];

int main() {
    getline(cin, txt);
    const uint DMAX = txt.size();

    for (uint i = 0; i < DMAX; ++i)
        if (txt[i] >= '0' and txt[i] <= '9')
            ++v[(int)(txt[i]) - 48];

    int maxi = 0;
    char k;
    for (int i = 0; i < 10; ++i)
        if (v[i] > maxi) {
            k = i + 48;
            maxi = v[i];
        }

    if (maxi)
        cout << k;
    else
        cout << "NU";

    return 0;
}