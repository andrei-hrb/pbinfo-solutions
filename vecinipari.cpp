#include <iostream>
#include <algorithm>

using namespace std;

int v[102][102],x[500],k,n,m,d;
bool ok;

void citire()
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> v[i][j];
}


void pare()
{
    for (int i = 0; i <= n+1; i++)
        for (int j = 0; j <= m+1; j++)
            {if (i == 0 && j <= m+1) v[i][j] = 2;
            if (i == n+1 && j <= m+1) v[i][j] = 2;
            if (j == 0 && i <= n+1) v[i][j] = 2;
            if (j == m+1 && i <=n+1) v[i][j] = 2;}

    for (int i = 1; i <= n; i++)
        for (int j= 1; j <= m; j++)
            if (v[i+1][j] % 2 == 0 && v[i-1][j] % 2 == 0 && v[i][j+1] % 2 ==0 && v[i][j-1] % 2 == 0) d++;
}

void scriere()
{
   cout << d;
}


int main()

{
    ios::sync_with_stdio(false);

    citire();
    pare();
    scriere();

    return 0;
}
