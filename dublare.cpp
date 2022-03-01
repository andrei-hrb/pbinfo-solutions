#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int maxi;

int main() {
    string s;       getline(cin, s);

    string string1 = s.substr(0, s.size() / 2);
    string string2 = s.substr(s.size() / 2, s.size());
    reverse(string2.begin(), string2.end());

    while (string1 == string2) {
        s = string1;
        string1 = s.substr(0, s.size() / 2);
        string2 = s.substr(s.size() / 2, s.size());
        reverse(string2.begin(), string2.end());
        ++maxi;
    }

    cout << maxi;

    return 0;
}