#include <fstream>

using namespace std;

ifstream fin("cifreord1.in");
ofstream fout("cifreord1.out");

int frecv[10];

int main() {
    char c;
    while (fin >> c) frecv[c - '0']++;

    int k = 0;
    for (int i = 9; i >= 0; i--) {
        if (frecv[i])
            for (int j = 0; j < frecv[i]; j++) {
                fout << i << ' ';
                k++;

                if (k == 20) {
                    fout << '\n';
                    k = 0;
                }
            }
    }

    return 0;
}
