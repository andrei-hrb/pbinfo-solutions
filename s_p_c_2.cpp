#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

ifstream fin("s_p_c_2.in");
ofstream fout("s_p_c_2.out");

string txt;
vector <string> s, p, c;

int main() {
    getline(fin, txt);

    stringstream sin(txt);

    string temp;
    while (sin >> temp) {
        string retemp = temp.substr(2, temp.size());
        if (temp[0] == 'S') {
            s.reserve(1);
            s.push_back(retemp);
        } else {
            if (temp[0] == 'P') {
                p.reserve(1);
                p.push_back(retemp);
            } else {
                c.reserve(1);
                c.push_back(retemp);
            }
        }
    }

    sort(s.begin(), s.end());
    sort(p.begin(), p.end());
    sort(c.begin(), c.end());

    int i = 0, j = 0, k = 0;
    while (i != s.size()) {
        fout << s[i] << ' ' << p[j] << ' ' << c[k] << '\n';

        ++k;

        if (k == c.size()) {
            k = 0;
            ++j;
        }

        if (j == p.size()) {
            j = 0;
            ++i;
        }
    }

    return 0;
}