#include <fstream>
#include <string>

using namespace std;

ifstream fin("minlex.in");
ofstream fout("minlex.out");

string txt;
int mini, p = 1, l = 1;

int main() {
    getline(fin, txt);
    const int DMAX = txt.size();

    while ((p < DMAX) and (mini + l + 1 < DMAX)) {
        int one = txt[mini + l];
        int two = txt[(p + l) % DMAX];

        if (one == two)
            ++l;
        else {
            if (one < two) {
                p += l + 1;
                l = 0;
            } else {
                mini = max(mini + l + 1, p);
                p = mini + 1;
                l = 0;
            }
        }
    }

    fout << mini;
}