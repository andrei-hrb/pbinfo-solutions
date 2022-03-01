#include <iostream>

using namespace std;

int x[20][20],mini=9999;
bool ok;
short n,m,i,j;

void citire()
{
    cin >> n >> m;

    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            {cin>>x[i][j];
            if(x[i][j] < mini) mini=x[i][j];}
}

void transformare()
{
    for(j = 0; j < m; j++)
        {ok = 0;
        for(i = 0; i < n; i++)
            if(x[i][j] == mini) ok = 1;
        if(ok == 1) {for (i = 0; i < n; i++)
        {x[i][j] = mini;}}}
}

void scriere()
{
    for (i = 0; i < n; i++)
        {for (j = 0; j < m; j++)
            cout << x[i][j] << ' ';
        cout << '\n';}
}

int main()
{
    ios::sync_with_stdio(false);

    citire();
    transformare();
    scriere();

    return 0;
}
