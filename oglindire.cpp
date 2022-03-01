#include <iostream>

using namespace std;

int v[100][101];
short int n,m;

bool prim(int n, int l) //l=5
{
    if (n <= 1) return false;
    else 
        {if (n <= 3) return true;
        else {if (n % 2 == 0 || n % 3 ==0) return false;
              else {while (l * l <= n)
                    {if (n % l == 0 || n % (l+2) == 0) return false;
                    l+=4;}}}}
                    
    return true;
}

void citire()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j];
}

void oglindire()
{
    for (int i = 0; i < n; i++)
        if (prim(v[i][0],5) == true) v[i][m] = 1;
}

void scriere()
{
    for (int i = 0; i < n; i++)
        if (v[i][m] == 0)
        {
            for (int j = 0; j < m; j++)
                cout << v[i][j] << ' ';
            cout << '\n';
        }
        else
        {
            for (int j = m-1; j >= 0; j--)
                cout << v[i][j] << ' ';
            cout << '\n';
        }
}

int main()
{
    ios::sync_with_stdio(false);

    citire();
    oglindire();
    scriere();

    return 0;
}
