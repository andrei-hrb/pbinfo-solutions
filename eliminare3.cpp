#include <iostream>

using namespace std;

int v[51][51];
short int n,m;

void citire()
{
    cin >> m >> n;

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> v[i][j];
}

void eliminare()
{
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            if (i == m - 1 || j == n - 1 ) v[i][j] = -1;
}

void scriere()
{
    for (int i = 1; i <= m; i++)
        {for (int j = 1; j <= n; j++)
            if (v[i][j] != -1) cout << v[i][j] << ' ';
        if (i != m - 1) cout << '\n';}
}

int main()
{
    ios::sync_with_stdio(false);

    citire();
    eliminare();
    scriere();

    return 0;
}
