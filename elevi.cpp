#include <iostream>

using namespace std;

int x[1000000],c,MAXI,CNTI,n,m;

int main()
{
    cin >> m >> n;
    int y[n];

for (int i=1; i<=n*m; i++)
{
    cin >> x[i];
    if (x[i]>MAXI) MAXI=x[i];
}

for (int i=1,l=1; i<=n*m && l<=n+1; i++,l++)
{
    y[l]=x[i];
    if (i%n==0)
    {
        for (int j=1; j<=n; j++)
        {
            if (y[j]==MAXI) {CNTI++; break;}
        }
    l=1;
    }

}

cout << MAXI << " " << CNTI;

return 0;
}


