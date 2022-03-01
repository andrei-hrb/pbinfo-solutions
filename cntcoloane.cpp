#include <iostream>

using namespace std;

int v[100][100],n,m,d;
bool ok;

void citire()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j];
}

void coloane()
{
    for (int j = 0; j < m; j++)
    {
        ok = true;
        for (int i = 0; i < n; i++)
        {
            if (ok == false) break;
            for (int l = i+1; l < n; l++)
            {
                if (v[i][j] == v[l][j]) {ok = false; break;}
            }
        }
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
    coloane();
    scriere();

    return 0;
}
