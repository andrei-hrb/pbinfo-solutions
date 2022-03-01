#include <iostream>
#include <algorithm>

using namespace std;

int v[100][100],x[100];
short int n,m;

void citire()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j];
}

void scriere()
{
    for (int i = 0; i < n; i++)
        {for (int j = 0; j < m; j++)
           x[j]=v[i][j];
        sort (x, x+m);
        for (int j = 0; j < m; j++)
            cout << x[j] << ' ';
        cout << '\n';}
}


int main()
{
    ios::sync_with_stdio(false);

    citire();
    scriere();

    return 0;
}
