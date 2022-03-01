#include <iostream>
#include <fstream>
#include <string>
#include <streambuf>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

ifstream fin("perechivocale1.in");
ofstream fout("perechivocale1.out");

struct custom {
    string per;
    long long nr;

    custom(const string perx, const long long nrx) : per(perx), nr(nrx){};
};

bool customCompare(custom a, custom b) {
    return a.nr > b.nr;
}

bool vowel(char ch) {
    return ch == 'a' or ch == 'e' or ch == 'o' or ch == 'u' or ch == 'i';
}

long long liniarSearch(vector <custom> v, string prc) {
    for (size_t i = 0; i < v.size(); ++i) {
        if (prc == v[i].per)
            return i;
    }

    return -1;
}

vector <custom> v;
string mainString((istreambuf_iterator<char> (fin)),
                  (istreambuf_iterator<char> ()));

int main() {
    stringstream sin(mainString);

    string temporaryString;
    while (sin >> temporaryString) {
        for (size_t i = 0; i < temporaryString.size(); ++i) {
            if (vowel(temporaryString[i]) and vowel(temporaryString[i + 1])) {
                string temp;
                temp.reserve(2);
                temp.push_back(temporaryString[i]);
                temp.push_back(temporaryString[i + 1]);

                long long pos = liniarSearch(v, temp);
                if (pos == -1) {
                    v.reserve(1);
                    v.emplace_back((custom(temp, 1)));
                } else
                    ++v[pos].nr;
            }
        }
    }

    sort(v.begin(), v.end(), customCompare);

    size_t i = 0;
    vector <string> sol;
    sol.reserve(1);
    sol.push_back(v[0].per);
    while (v[i].nr == v[i + 1].nr) {
        sol.reserve(1);
        sol.push_back(v[i + 1].per);

        ++i;
    }

    sort(sol.begin(), sol.end());

    for (i = 0; i < sol.size(); ++i)
        fout << sol[i] << ' ';

    return 0;
}