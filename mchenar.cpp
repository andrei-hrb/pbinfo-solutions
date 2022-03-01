#include <iostream>
#include <algorithm>

using namespace std;

int v[100][100],x[500],k,n,m,d;
bool ok;

void citire()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            {cin >> v[i][j];
            if (i == 0) {x[k] = v[i][j]; k++;}
            if (i == n-1) {x[k] = v[i][j]; k++;}
            if (j == 0) {x[k] = v[i][j]; k++;}
            if (j == m-1) {x[k] = v[i][j]; k++;}}
}

void chenar()
{
    sort(x, x+k);
}

void scriere()
{
    for (int i = 0; i < k; i++)
        {if (x[i] != x[i-1]) cout << x[i] << ' ';
        if (x[i] == 0) cout << x[i] << ' ';}
}


int main()

{
    ios::sync_with_stdio(false);

    citire();
    chenar();
    scriere();

    return 0;
}
