#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

ifstream fin("permutarecuvant.in");
ofstream fout("permutarecuvant.out");

string txt;
vector <string> sol;

int main() {
    getline(fin, txt);

    string temp;

    for (size_t i = 1; i < txt.size(); ++i) {
            temp.reserve(1);
            temp.push_back(txt[i]);
    }
    temp.reserve(1);
    temp.push_back(txt[0]);

    sol.reserve(2);
    sol.push_back(txt);
    sol.push_back(temp);

    string tempp;
    for (size_t pos = 1; pos < temp.size() - 1; ++pos) {
        for (size_t i = 1; i < temp.size(); ++i) {
            tempp.reserve(1);
            tempp.push_back(temp[i]);
        }
        tempp.reserve(1);
        tempp.push_back(temp[0]);

        temp = tempp;
        tempp.erase(tempp.begin(), tempp.end());

        sol.reserve(1);
        sol.push_back(temp);
    }

    for (size_t i = 0; i < sol.size(); ++i)
        fout << sol[i] << ' ';

    return 0;
}