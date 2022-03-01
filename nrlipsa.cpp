#include <fstream>

using namespace std;

ifstream fin("nrlipsa.in");
ofstream fout("nrlipsa.out");

bool frecv[899];

int main() {
    int n; fin >> n;

    int t;
    while (fin >> t)
        if (t >= 100 && t <= 999)
            frecv[t - 100] = true;


    int f = -1, s = -1;
    for(int i = 899; i >= 0 && s == -1; i--)
        if (! frecv[i])
            if (f == -1) f = i + 100;
            else s = i + 100;

    if (s != -1) fout << f << ' ' << s;
    else fout << "NU";

    return 0;
}
