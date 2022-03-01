#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string mainString, subString;

int main() {
    getline(cin, mainString);
    cin >> subString;

    mainString.replace(mainString.rfind(subString), subString.size(), "");

    cout << mainString;

    return 0;
}