#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("ore.in");
ofstream fout("ore.out");

int h1, h2, m1, m2, s1, s2;

int main() {
    fin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    fout << h1 << ": " << m1 << ": " << s1 << '\n';
    fout << h2 << ": " << m2 << ": " << s2 << '\n';

    s1 += h1 * 3600 + m1 * 60;
    s2 += h2 * 3600 + m2 * 60;

    fout << s1 << '\n' << s2 << '\n';

    s1 += s2;

    h1 = s1 / 3600;
    fout << h1 << ": ";
    s1 -= h1 * 3600;

    m1 = s1 / 60;
    fout << m1 << ": ";
    s1 -= m1 * 60;
    
    fout << s1;

    return 0;
}