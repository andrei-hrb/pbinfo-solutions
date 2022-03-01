#include "iostream"
#include "fstream"
#include "string"
#include "sstream"
#include "limits"
typedef unsigned long ulong;

using namespace std;

ifstream fin("doarvocale.in");
ofstream fout("doarvocale.out");

bool vowel (char ch) {
    return ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u';
}

int n, nr;
string txt;

int main() {
    fin >> n;
    fin.ignore(numeric_limits<streamsize>::max(),'\n');

    for (int i = 0; i < n; ++i) {
        getline(fin, txt);
        const ulong DMAX = txt.size();

        bool ok = 1;
        for (ulong j = 0; j < DMAX; ++j)
            if (!vowel(txt[j]))
                ok = 0;

        if (ok)
            ++nr;
    }

    fout << nr;

    return 0;
}