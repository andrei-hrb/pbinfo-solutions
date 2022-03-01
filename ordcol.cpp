#include <iostream>

using namespace std;

int v[100][100],aux;
short int n,m;
bool g = 1;

void citire()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j];
}

void sortare()
{
    do
    {
     g = 0;

        for (int j = 0; j < m-1; j++)
        {
            if (v[0][j] > v[0][j+1])
            {
                for (int i = 0; i < n; i++)
                {
                    aux = v[i][j];
                    v[i][j] = v[i][j+1];
                    v[i][j+1] = aux;
                    g = 1;
                }
            }
        }
    }
    while (g == 1);
}

void scriere()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << v[i][j] << ' ';
        cout << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);

    citire();
    sortare();
    scriere();

    return 0;
}
