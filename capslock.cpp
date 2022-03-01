//#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

ifstream cin("capslock.in");
ofstream cout("capslock.out");

string input;

int main() {
    getline(cin, input);

    bool caps = false;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == '#') {
            caps = !caps;
            continue;
        }

        if (caps) input[i] = toupper(input[i]);

        cout << input[i];
    }

    return 0;
}
