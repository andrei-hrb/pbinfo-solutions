#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

ifstream fin("email.in");
ofstream fout("email.out");

struct custom {
    string str;
    int nr;

    custom (const string strx, const int nrx) : str(strx), nr(nrx) {};
};

vector <custom> v;

int liniarSearch(string strr) {
    for (size_t i = 0; i < v.size(); ++i)
        if (strr == v[i].str)
            return i;

    return -1;
}

bool customCompare(custom a, custom b) {
    return a.nr > b.nr;
}

string string1;

int main() {
    size_t i = 0;
    while (fin >> string1) {
        while(string1[i] != '@')
            ++i;

        string1.erase(0, i + 1);

        int pos = liniarSearch(string1);
        if (pos == -1) {
            v.reserve(1);
            v.emplace_back((custom(string1, 1)));
        } else
            ++v[pos].nr;

        i = 0;
    }

    sort(v.begin(), v.end(), customCompare);

    fout << v.size() << '\n';

    for (size_t i = 0; i < v.size(); ++i) {
        if (v[i].nr != v[i + 1].nr)
            fout << v[i].str << ' ' << v[i].nr << '\n';
        else {
            vector <string> t;
            while (v[i].nr == v[i + 1].nr) {
                t.reserve(1);
                t.emplace_back(v[i].str);

                ++i;
            }

            t.reserve(1);
            t.emplace_back(v[i].str);

            sort(t.begin(), t.end());

            for (size_t j = 0; j < t.size(); ++j)
                fout << t[j] << ' ' << v[i - 1].nr << '\n';
        }
    }

    return 0;
}