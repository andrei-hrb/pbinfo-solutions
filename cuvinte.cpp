#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

string mainString;
vector <string> words;

int main() {
    getline(cin, mainString);

    stringstream stringInput(mainString);

    string temporaryString;
    while (stringInput >> temporaryString) {
        words.reserve(1);
        words.push_back(temporaryString);
    }

    sort(words.begin(), words.end());

    words.reserve(1);
    words.push_back("random string just for the next loop");

    size_t i;
    int counter = 1;
    for (i = 0; i < words.size() - 1; ++i)
        if (words[i] != words[i + 1]) {
            cout << words[i] << ' ' << counter << '\n';
            counter = 1;
        } else {
        ++counter;
        }

    return 0;
}