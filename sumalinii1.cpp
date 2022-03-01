#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long int v[101],a[101][101],n,m,i,j,ma=-1,s=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        s=0;
        ma=-1;
        for(j=1;j<=m;j++)
        {
            cin>>a[i][j];
            s+=a[i][j];
            if(a[i][j]>ma)
                ma=a[i][j];
        }
        v[i]=s-ma;
    }
    for(i=1;i<=n;i++)
        cout<<v[i]<<' ';
    return 0;
}