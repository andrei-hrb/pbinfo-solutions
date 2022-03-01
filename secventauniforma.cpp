#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("secventauniforma.in");
ofstream fout("secventauniforma.out");

int main() {
    int ras, ras_rec = 1;
    int ante, ante_rec = 1;
    fin >> ante;
    ras = ante;

    int temp;
    while (fin >> temp)
        if (temp == ante) ante_rec++;
        else {
            if (ante_rec >= ras_rec) ras = ante, ras_rec = ante_rec;
            ante = temp, ante_rec = 1;
        }

    if (ante_rec >= ras_rec) ras = ante, ras_rec = ante_rec;

    fout << ras_rec << '\n';
    for (int i = 0; i < ras_rec; i++) {
        fout << ras << ' ';
    }

    return 0;
}
