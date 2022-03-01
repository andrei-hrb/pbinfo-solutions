#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <cstring>
#include <fstream>

using namespace std;

ifstream fin("cnp.in");
ofstream fout("cnp.out");

bool found = 0;
string txt;

char v[] = "0123456789";
bool allAreDigits(string str) {
    for (size_t i = 0; i < str.size(); ++i)
        if (!strchr(v, str[i]))
            return 0;
    return 1;
}

int main() {
    while (fin >> txt) {
        if (txt.size() >= 13) {
            size_t pos = 0;
            while (!isdigit(txt[pos]))
                ++pos;

            txt.erase(txt.begin(), txt.begin() + pos);
            reverse(txt.begin(), txt.end());

            pos = 0;
            while (!isdigit(txt[pos]))
                ++pos;

            txt.erase(txt.begin(), txt.begin() + pos);
            reverse(txt.begin(), txt.end());

            if (txt.size() == 13 and allAreDigits(txt)) {
                fout << txt << '\n';
                found = 1;
            }

        }
    }

    if (!found)
        fout << 0 << '\n';

    fin.close();
    fout.close();

    return 0;
}