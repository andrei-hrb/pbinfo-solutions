#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

string txt;
vector <string> v;

int main() {
    getline(cin, txt);

    stringstream sin(txt);

    bool ok = 0;
    string temp;
    while (sin >> temp) {
        v.reserve(1);
        if (!(temp.size() & 1)) {
            v.push_back("#");
            ok = 1;
        } else
            v.push_back(temp);
    }

    if (ok) {
        const int DMAX = v.size();
        for (int i = 0; i < DMAX; ++i)
            cout << v[i] << ' ';
    } else
        cout << "nu exista";

    return 0;
}