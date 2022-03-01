#include <iostream>

using namespace std;

int x[100][100];
bool ok;
short n,m,i,j;

bool prim(int n, int l) //l=5
{
    if (n <= 1) return false;
    else
    {
        if ( n <= 3) return true;
        else 
        {
            if (n % 2 == 0 || n % 3 == 0) return false;
            else
            {
                while (l * l <= n)
                {
                    if (n % l == 0 || n % (l+2) == 0) return false;
                    l+=4;
                }
            }
        }
    }
    return true;
}

void citire()
{
    cin >> n >> m;

    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            cin>>x[i][j];
}

void scriere()
{
    for (i = 0; i < n; i++)
        {ok = false;
        for (j = 0; j < m; j++)
            if (prim(x[i][0],5) == false) {cout << x[i][j] << ' '; ok = true;}
        if (ok == true) cout << '\n';}
}

int main()
{
    ios::sync_with_stdio(false);

    citire();
    scriere();

    return 0;
}
