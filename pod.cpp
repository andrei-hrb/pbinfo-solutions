#include <iostream>

using namespace std;

int v[1000][1000],d;
short int n,m,i,j;
long long s;

void cit()
{
    cin >> n >> m;
    
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            cin >> v[i][j];
}

void pod()
{
    for (j = 0; j < m ; j++)
        {d = 10001;
        for (i = 0; i < n; i++)
            if (v[i][j] < d) d = v[i][j];
        s+=d;}
}

void scr()
{
    cout << s;
}

int main()
{
    ios::sync_with_stdio(false);
    
    cit();
    pod();
    scr();
    
    return 0;
}
