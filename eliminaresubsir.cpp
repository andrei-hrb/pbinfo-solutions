#include <iostream>
#include <string>
#include <limits>

using namespace std;

string mainString, string1;

void replaceAll(string& str, const string& from, const string& to) {
    if(from.empty())
        return;
    unsigned long start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
}

int main() {
    getline(cin, mainString);
    cin >> string1;

    replaceAll(mainString, string1, "");

    cout << mainString;

    return 0;
}