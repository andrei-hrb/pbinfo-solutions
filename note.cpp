#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution;

vector<string> notes = {
        "DO",
        "RE",
        "MI",
        "FA",
        "SOL",
        "LA",
        "SI",
};

bool find_if_str_has_notes (string str) {
    for(auto &i : notes) {
        if (str.find(i) != string::npos) {
            return true;
        }
    }

    return false;
}

int main() {
    string str;
    getline(cin, str);

    istringstream iss(str);

    string temp;
    while(iss >> temp) {
        if(find_if_str_has_notes(temp)) {
            solution.reserve(1);
            solution.emplace_back(temp);
        }
    }

    if(! solution.empty()) {
        for (auto &i : solution) {
            cout << i << '\n';
        }
    } else {
        cout << "nu exista";
    }

    return 0;
}
