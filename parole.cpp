#include <fstream>
#include <string>
#include <limits>
#include <algorithm>

using namespace std;

ifstream fin("parole.in");
ofstream fout("parole.out");

string a = "qwertyuiopasdfghjklzxcvbnm";
string b = "QWERTYUIOPASDFGHJKLZXCVBNM";
string c = "0123456789";
string d = ".,?!;:_@#";

const size_t AMAX = a.size();
const size_t BMAX = b.size();
const size_t CMAX = c.size();
const size_t DMAX = d.size();

bool strongPass(string str) {
    bool oka = 0;
    bool okb = 0;
    bool okc = 0;
    bool okd = 0;

    for (size_t i = 0; i < AMAX; ++i)
        if (count(str.begin(), str.end(), a[i])) {
            oka = 1;
            break;
        }

    for (size_t i = 0; i < BMAX; ++i)
        if (count(str.begin(), str.end(), b[i])){
            okb = 1;
            break;
        }

    for (size_t i = 0; i < CMAX; ++i)
        if (count(str.begin(), str.end(), c[i])) {
            okc = 1;
            break;
        }

    for (size_t i = 0; i < DMAX; ++i)
        if ((count(str.begin(), str.end(), d[i]))) {
            okd = 1;
            break;
        }

    if (oka and okb and okc and okd and str.size() - 1 >= 8)
        return 1;
    return 0;

}

int n, s;
string txt;

int main() {
    fin >> n;
    fin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < n; ++i) {
        getline(fin, txt);

        s += strongPass(txt);
    }

    fout << s;

    fin.close();
    fout.close();

    return 0;
}