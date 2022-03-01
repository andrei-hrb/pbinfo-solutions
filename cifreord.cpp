#include <fstream>
#include <algorithm>

using namespace std;

ifstream fin("cifreord.in");
ofstream fout("cifreord.out");

int n,v[100000];

void citire()
{
    fin >> n;

    for (int i = 0; i < n; ++i)
        fin >> v[i];
}

void sortare()
{
    sort(v, v+n);
}

void scriere()
{
    for (int i = 0, j = 0; i < n; ++i,++j)
    {
        if (j == 20) {j = 0; fout << '\n';}
        fout << v[i] << ' ';
    }
}

int main()
{
    ios::sync_with_stdio(false);

    citire();
    sortare();
    scriere();

    return 0;
}
