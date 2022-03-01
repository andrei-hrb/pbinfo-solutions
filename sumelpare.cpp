#include <iostream>

using namespace std;

int v[102][102];
short int n,m,l;
long long s,e;

void citire()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        s=0;
        for (int j = 0; j < m; j++)
            {cin >> v[i][j];
            if (v[i][j] % 2 == 0) s+=v[i][j];}
        if (s > e) {e = s; l = i;}
    }
}


void scriere()
{
    cout << l + 1;
}

int main()

{
    ios::sync_with_stdio(false);

    citire();
    scriere();

    return 0;
}
