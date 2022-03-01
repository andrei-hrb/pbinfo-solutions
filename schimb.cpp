#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <algorithm>

using namespace std;

ifstream fin("schimb.in");
ofstream fout("schimb.out");

int n, k, p;
string txt;

int main() {
    fin >> n >> k >> p;
    fin.ignore(numeric_limits<streamsize>::max(),'\n');

    for (int step = 0; step < n; ++step) {
        getline(fin, txt);

        if (k > txt.size()) {
            reverse(txt.begin(), txt.end());
            fout << txt;
        } else {
            txt[k - 1] = 'a' + p - 1;
            fout << txt;
        }

        fout << '\n';
    }

    return 0;
}