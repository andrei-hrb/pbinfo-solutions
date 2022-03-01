#include <iostream>

using namespace std;

int v[100][100];
short int n,m,d;
bool ok;

void citire()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j];
}

void asemenea()
{
    for (int i = 0; i < n-1; i++)
        {ok = false;
        for (int j = 0; j < m; j++)
            if (v[i][j] == v[i+1][j]) ok = true;
            else {ok = false; break;}
        if (ok == true) d++;}
}

void scriere()
{
    cout << d;
}

int main()
{
    ios::sync_with_stdio(false);

    citire();
    asemenea();
    scriere();

    return 0;
}
