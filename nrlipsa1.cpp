#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("nrlipsa1.in");
ofstream fout("nrlipsa1.out");

int i(int v) {
    return (v / 2) - 5;
}

int v(int i) {
    return (i + 5) * 2;
}

bool f[45];

int main() {
    int t;
    while (fin >> t)
        if (t >= 10 && t <= 98 && t % 2 == 0)
            f[i(t)] = true;

    bool minif = true;
    int mini = 0;
    while(f[mini]) {
        mini++;
        if (mini == 44) {
            minif = false;
            break;
        }
    }

    bool maxif = true;
    int maxi = 44;
    while(f[maxi]) {
        maxi--;
        if (maxi == 0) {
            maxif = false;
            break;
        }
    }

    if (minif && maxif && mini != maxi) fout << v(mini) << ' ' << v(maxi);
    else fout << "nu exista";

    return 0;
}
