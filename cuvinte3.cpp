#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <streambuf>

using namespace std;

ifstream fin("cuvinte3.in");
ofstream fout("cuvinte3.out");

string txt((istreambuf_iterator<char>(fin)),
           (istreambuf_iterator<char>()));
string a = "ate";
vector <string> v;

int linearSearch(string str) {
    for (size_t i = 0; i < v.size(); ++i)
        if (str == v[i])
            return i;
    return -1;
}

int main() {
    fin.close();

    replace(txt.begin(), txt.end(), '.', ' ');
    replace(txt.begin(), txt.end(), ',', ' ');
    replace(txt.begin(), txt.end(), ';', ' ');
    replace(txt.begin(), txt.end(), ':', ' ');
    replace(txt.begin(), txt.end(), '-', ' ');
    replace(txt.begin(), txt.end(), '!', ' ');
    replace(txt.begin(), txt.end(), '?', ' ');

    stringstream sin(txt);

    string temp;
    while (sin >> temp) {
        if (temp.size() >= 3) {
            string original = temp;

            transform(temp.begin(), temp.end(), temp.begin(), ::tolower);

            if (linearSearch(temp) == -1 and temp.find(a) != string::npos) {
                v.reserve(1);
                v.emplace_back(temp);

                fout << original << '\n';
            }
        }
    }

    fout.close();

    return 0;
}