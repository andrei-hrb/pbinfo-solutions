#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

bool ok = false;
string txt;
vector <string> v;

int main() {
    getline(cin, txt);

    stringstream sin(txt);

    string temp;
    while(sin >> temp) {
        v.reserve(1);
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    for (auto i = 0; i < v.size() - 1; ++i) {
        temp.erase(temp.begin(), temp.end());

        if (v[i].size() - 1 == v[i + 1].size())
            for (auto j = 0; j < v[i + 1].size(); ++j) {
                if (v[i].size() / 2 - 1 == j) {
                    temp.reserve(1);
                    temp.push_back(v[i + 1][j]);
                }

                temp.reserve(1);
                temp.push_back(v[i + 1][j]);
            }

        if (temp == v[i + 1]) {
            ok = true;
            break;
        }

        if (v[i + 1].size() - 1 == v[i].size())
            for (auto j = 0; j < v[i].size(); ++j) {
                if (v[i + 1].size() / 2 - 1 == j) {
                    temp.reserve(1);
                    temp.push_back(v[i][j]);
                }

                temp.reserve(1);
                temp.push_back(1);
            }
            
        if (temp == v[i]) {
            ok = true;
            break;
        }
    }

    if (ok)
        cout << "DA";
    else
        cout << "NU";


    return 0;
}