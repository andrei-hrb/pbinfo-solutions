#include <iostream>

using namespace std;

int v[101][101],l;
short int m,n,d;

bool prim(int a)
{
    if (a <= 1) return false;
    else
    {if (a <= 3) return true;
    else {if (a % 2 == 0 || a % 3 == 0) return false;}}

    l=5;

    while (l * l <= a)
    {
        if (a % l == 0 || a % (l + 2) == 0) return false;
        l++;
    }

    return true;
}

void citire()
{
    cin >> n >> m;

    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++)
            cin >> v[i][j];
}

void numar()
{
    for (int i=2; i<=n; i+=2)
        for (int j=1; j<=m; j++)
            if (prim(v[i][j]) == true) d++;
}

void scriere()
{
   cout << d;
}

int main()
{
    ios::sync_with_stdio(false);

    citire();
    numar();
    scriere();

    return 0;
}
