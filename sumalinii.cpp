#include <iostream>

using namespace std;

int a[101][101],n,m,s;

int main ()
{
    ios::sync_with_stdio(false);

    cin >> n >> m;

    for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=m; j++)
            {
                cin >> a[i][j];
                s+=a[i][j];
            }
            cout << s << " ";
            s=0;
        }

    return 0;
}
