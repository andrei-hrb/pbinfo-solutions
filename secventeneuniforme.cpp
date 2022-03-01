#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("secventeneuniforme.in");
ofstream fout("secventeneuniforme.out");

short f, m, l;
int k = -1, n = 3;

int main() {
    fin >> f >> m;

    while (fin >> l) {
        if (k == -1) {
            if (f != m && m != l && l != f) k = 3;
            else if (m != l) k = 2;
            else k = 1;
        } else {
            if (f != m && m != l && l != f) k++;
            else {
                if (k > n) n = k;
                k = -1;
            }
        }

        f = m;
        m = l;
    }


    if (m != l) k++;
    if (k > n) n = k;

    fout << n;

    return 0;
}
