#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("pozitiiconsecutive.in");
ofstream fout("pozitiiconsecutive.out");

int main() {
    int x, y;
    fin >> x >> y;
    fout << y << ' ' << x << ' ';

    while (x != 0) {
        x = 2 * x - y + 2;
        y = (x + y - 2) / 2;
        fout << x << ' ';
    }

    return 0;
}
