#include <iostream>

using namespace std;

int v[102][102],aux;
short int m,n;
long long s;
bool g=1;

void citire()
{
    cin >> n >> m;

    for (int i=1; i<=n; i++)
        {s=0;
        for (int j=1; j<=m; j++)
            {cin >> v[i][j];
            s+=v[i][j];
            }
        v[i][m+1]=s;
        }

}

void transformare()
{
    do
    {
    g=0;
    for (int i=1; i<n; i++)
    {
        if (v[i][m+1] > v[i+1][m+1])
        {
            for (int j=1; j<=m+1; j++)
            {
                aux=v[i][j];
                v[i][j]=v[i+1][j];
                v[i+1][j]=aux;
            }
            g=1;
        }
    }
    }
    while (g == 1);
}

void scriere()
{
    for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=m; j++)
                cout << v[i][j] << ' ';
            cout << '\n';
        }
}


int main()
{
    ios::sync_with_stdio(false);

    citire();
    transformare();
    scriere();

    return 0;
}
