#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int nr;
string string1;
vector <string> v;

int main() {
    getline(cin, string1);

    stringstream sin(string1);

    string string2;
    while (sin >> string2) {
        v.reserve(1);
        v.emplace_back(string2);
    }

    const size_t DMAX = v.size() - 1;
    const string original = v[DMAX];
    size_t sz = v[DMAX].size();

    sort(v[DMAX].begin(), v[DMAX].end());

    for (size_t i = 0; i < DMAX; ++i) {
        if (v[i].size() == sz and original != v[i]) {

            sort(v[i].begin(), v[i].end());

            if (v[i] == v[DMAX])
                ++nr;
        }
    }

    cout << nr;

    return 0;
}