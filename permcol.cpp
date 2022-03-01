#include <iostream>

using namespace std;

int v[102][102],aux;
short int m,n;

void citire()
{
    cin >> n >> m;

    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++)
            cin >> v[i][j];
}

void circular()
{
    for (int i=1; i<=n; i++)
        v[i][m+1]=v[i][1];
}

void scriere()
{
   for (int i=1; i<=n; i++)
    {for (int j=2; j<=m+1; j++)
        cout << v[i][j] << ' ';
    cout << '\n';}
}

int main()
{
    ios::sync_with_stdio(false);

    citire();
    circular();
    scriere();

    return 0;
}
