#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("inserare2.in");
ofstream fout("inserare2.out");

int main() {
    int x, y, xs, xl, y1, y2;
    fin >> x >> y;

    fin >> xs;
    for (int i = 1; i < x; i++) fin >> xl;

    int i = 2;
    fin >> y1;
    while(fin >> y2) {
        if (xs > y1 && xl < y2) {
            fout << i;

            return 0;
        }

        i++;
        y1 = y2;
    }

    fout << "imposibil";
    return 0;
}
