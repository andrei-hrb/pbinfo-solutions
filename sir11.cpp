#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("sir11.in");
ofstream fout("sir11.out");

int main() {
    int n; fin >> n;

    for (int i = n + 1; i > 1; i--) {
        fout << (i / 2) * (i% 2 ? -1 : 1) << ' ';
    }

    return 0;
}
