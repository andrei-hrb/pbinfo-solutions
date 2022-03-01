#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream fin("key.in");
ofstream fout("key.out");

int n, p, c, v[5], s;
string txt, temp;

int main() {
    fin >> p >> txt >> n;

    for (int i = 0; i < n; ++i) {
        fin >> temp >> c;

        int nr = 0;
        for (int j = 0; j < 3; ++j)
            if (temp[j] == txt[j])
                ++nr;

        ++v[nr];

        if (nr == 0)
            s += c;
        else {
            if (nr == 1)
                s += (c / 3) * 2;
            else if (nr == 2)
                s += c / 3;
        }
    }

    if (p == 1)
        for (int i = 0; i < 4; ++i)
            fout << v[i] << ' ';
    else {
        if (s)
            fout << s;
        else
            fout << "GRATIS";
    }

    return 0;
}