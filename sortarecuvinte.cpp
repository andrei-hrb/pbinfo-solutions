#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

ifstream fin("sortcuv.in");
ofstream fout("sortcuv.out");

string txt;
vector <string> v;

int main() {
    getline(fin, txt);

    stringstream sin(txt);

    string temp;
    while (sin >> temp) {
        v.reserve(1);
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); ++i)
        fout << v[i] << '\n';

    return 0;
}