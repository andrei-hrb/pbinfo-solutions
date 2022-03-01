#include <iostream>

using namespace std;

int x[101][100];
bool ok;
short n,m,i,j;

void citire()
{
    cin >> n >> m;

    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            {cin>>x[i][j];
            if(x[i][j] == 0) x[n][j] = 1;}
}

void scriere()
{
    for (i = 0; i < n; i++)
        {ok = false;
        for (j = 0; j < m; j++)
            if (x[n][j] == 0) {ok = true; cout << x[i][j] << ' ';}
        if (ok == true) cout << '\n';}
}

int main()
{
    ios::sync_with_stdio(false);

    citire();
    scriere();

    return 0;
}
