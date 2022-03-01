#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("intervale5.in");
ofstream fout("intervale5.out");

bool frecv[1000], modif;

int main() {
    short t;
    while(fin >> t) frecv[t] = true;

    for (int i = 0; i < 997; i++) {
        if (frecv[i] && !frecv[i + 1]) {
            int j = i + 2;
            while(!frecv[j] && j < 999) j++;
            if (frecv[j]) {
                fout << i << ' ' << j << '\n';
                modif = true;
            }
        }
    }

    if (!modif) {
        fout << "nu exista";
    }

    return 0;
}
