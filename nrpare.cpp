#include <iostream>

using namespace std;

int v[100][100];
short int n,m,d,e,x[100];

void citire()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        d=0;
        for (int j = 0; j < m; j++)
            {cin >> v[i][j];
            if (v[i][j] % 2 == 0) d++;}
        x[i]=d;
        if (d > e) e = d;
    }
}


void scriere()
{
    for (int i = 0; i < n; i++)
    {
        if (x[i] == e) cout << i+1 << ' ';
    }
}

int main()

{
    ios::sync_with_stdio(false);

    citire();
    scriere();

    return 0;
}
