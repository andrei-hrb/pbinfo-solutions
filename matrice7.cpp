#include <fstream>
#include <iostream>

using namespace std;

ifstream fin("matrice7.in");
ofstream fout("matrice7.out");

int v[102][102],d;
short int n,m;

void citire()
{
    fin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            {fin >> v[i][j];
            if (v[i][j] > d) d = v[i][j];}

}

void minim_coloana()
{
    for (int j = 0; j < m; j++)
    {
        v[n][j]=1000000001;
        for (int i = 0; i < n; i++)
            if (v[i][j] < v[n][j]) v[n][j] = v[i][j];
    }
}

void scriere()
{
    for (int i = 0; i < n; i++)
        {for (int j = 0; j < m; j++)
            if (v[i][j] == d) fout << v[n][j] << ' ';
            else fout << v[i][j] << ' ';
        fout << '\n';}

    fin.close();
    fout.close();
}


int main()
{
    ios::sync_with_stdio(false);

    citire();
    minim_coloana();
    scriere();

    return 0;
}
