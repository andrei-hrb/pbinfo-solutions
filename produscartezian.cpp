#include <iostream>
using namespace std;
int n,m;
int main()
{

    cin >> n >> m;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=m; j++)
        {
            if (i==1 && j==1) cout<<"{";
            cout << "(" << i << "," << j << ")";
            if (i==n && j==m) cout<<"}";
            else cout << ",";
        }
    }

return 0;
}
