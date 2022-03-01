#include <iostream>
#include <sstream>

using namespace std;

string string1;

int main() {
    getline(cin, string1);

    stringstream sin(string1);

    string string2;
    while (sin >> string2)
        cout << string2 << ' ';

    return 0;
}