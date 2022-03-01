#include "iostream"
#include "string"
#include "sstream"
#include "vector"
#include "algorithm"

typedef unsigned int uint;

using namespace std;

string txt;
vector <string> v;

int main() {
    getline(cin, txt);

    stringstream sin(txt);

    string temp;
    while (sin >> temp) {
        v.reserve(1);
        v.push_back(temp);
    }

    sort(v.begin(), v.end());
    const uint DMAX = v.size();

    for (uint i = 0; i < DMAX - 1; ++i)
        if (v[i] != v[i + 1])
            cout << v[i] << '\n';
    
    if (v[DMAX - 1] != v[DMAX - 2])
        cout << v[DMAX - 1];

    return 0;
}