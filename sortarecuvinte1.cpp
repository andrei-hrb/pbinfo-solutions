#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <streambuf>

using namespace std;

vector <string> v;

ifstream fin("sortarecuvinte1.in");
ofstream fout("sortarecuvinte1.out");

string txt((istreambuf_iterator<char>(fin)),
           (istreambuf_iterator<char>()));

int main() {
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