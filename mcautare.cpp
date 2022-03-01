#include <iostream>

using namespace std;

int v[100][100],x[1000],k;
short int n,m,g;

void citire()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j];

    cin >> k;

    for (int i = 0; i < k; i++)
        cin >> x[i];
}

void caracterisitici()
{
    for (int l = 0; l < k; l++)
        {g=0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (x[l] == v[i][j]) {g++; break;}
        if (g == n) cout << "DA" << '\n';
        else cout << "NU" << '\n';}
}


int main()
{
    ios::sync_with_stdio(false);

    citire();
    caracterisitici();

    return 0;
}
