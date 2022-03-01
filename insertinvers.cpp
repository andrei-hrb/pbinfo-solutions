#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    string line;
    getline(cin, line);

    istringstream iss(line);

    string temp;
    while (iss >> temp) {
        cout << temp << ' ';
        reverse(temp.begin(), temp.end());
        cout << temp << ' ';
    }

    return 0;
}
