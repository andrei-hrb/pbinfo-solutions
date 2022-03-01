#include <iostream>

using namespace std;

int v[100][100],n,m;
bool ok,o=false;

void citire()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j];
}


void scriere()
{
    for (int j = 0; j < m; j++)
        {ok= true;
        for (int i = 0; i < n; i++)
            if (v[i][j] != v[1][j]) {ok = false; break;}
        if (ok == true) {cout << v[1][j] << ' '; o = true;}}

        if (o == false) cout << "nu exista";
}

int main()

{
    ios::sync_with_stdio(false);

    citire();
    scriere();

    return 0;
}
