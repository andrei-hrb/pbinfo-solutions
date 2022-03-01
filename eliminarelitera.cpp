#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

bool even(size_t sz) {
    return sz > 2 and sz & 1;
}

string mainString;
vector <string> v;

int main() {
    getline(cin, mainString);

    stringstream sin(mainString);

    bool ok = false;
    string temp;
    while (sin >> temp) {
        if(even(temp.size())) {
            temp.erase(temp.begin() + temp.size() / 2);
            ok = true;
        }

        v.reserve(1);
        v.emplace_back(temp);
    }

    if (ok)
        for (size_t i = 0; i < v.size(); ++i)
            cout << v[i] << ' ';
    else
        cout << "nu exista";

    return 0;
}