#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string string1;

int main() {
    getline(cin, string1);

    stringstream sin(string1);

    string temp;
    while (sin >> temp) {
        if (temp.size() == 3)
            cout << "* ";
        else
            cout << temp << ' ';
    }

    return 0;
}