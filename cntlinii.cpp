#include <iostream>

using namespace std;

int v[100][100],n,m,d;
bool ok;

void citire()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        ok = true;
        for (int j = 0; j < m; j++)
            {cin >> v[i][j];
            if (v[i][j] != v[i][0]) ok = false;}
        if (ok == true) d++;
    }
}

void scriere()
{
    cout << d;
}


int main()

{
    ios::sync_with_stdio(false);

    citire();
    scriere();

    return 0;
}