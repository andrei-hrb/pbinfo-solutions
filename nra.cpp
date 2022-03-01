#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
typedef unsigned long ulong;

using namespace std;

int nr;
string txt;

int main() {
    getline(cin, txt);

    stringstream sin(txt);

    string temp;
    while (sin >> temp)
        if (count(temp.begin(), temp.end(), 'a'))
            ++nr;

    cout << nr;

    return 0;
}