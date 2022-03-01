#include <iostream>

using namespace std;

int v[100][100],aux;
short int n,m,i,j;
bool g = 1;

void cit()
{
    cin >> n >> m;
    
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            cin >> v[i][j];
}

void desc()
{
    for (j = 0; j < m ; j++)
        for (i = 0; i < n-1; i++)
        {
            do
            {
                g = 0;
                if (v[i][j] < v[i+1][j])
                {
                    aux = v[i+1][j];
                    v[i+1][j] = v[i][j];
                    v[i][j] = aux;
                    g = 1;
                    i = 0;
                }   
            }
            while (g == 1);
        }
}

void scr()
{
    for (i = 0; i < n; i++)
        {for (j = 0; j < m; j++)
            cout << v[i][j] << ' ';
        cout << '\n';}
}

int main()
{
    ios::sync_with_stdio(false);
    
    cit();
    desc();
    scr();
    
    return 0;
}
