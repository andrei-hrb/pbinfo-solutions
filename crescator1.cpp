#include <fstream>

using namespace std;

ifstream fin("crescator1.in");
ofstream fout("crescator1.out");

int main() {
    int lv, v, k = 1;

    fin >> lv;
    while (fin >> v) {
        if (lv == v) k++;
        else {
            if (k % 2) {
                fout << lv;

                return 0;
            }

            k = 1;
        }

        lv = v;
    }


    if (k % 2) {
        fout << lv;

        return 0;
    }

    fout << "nu exista";

    return 0;
}
