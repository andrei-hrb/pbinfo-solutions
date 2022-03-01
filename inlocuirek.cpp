#include <iostream>
#include <cmath>

using namespace std;

int x[200],k,n,a,b,l,y;

int main()
{
    cin >> k >> n;

for (int i=1; i<=n; i++)
{
    cin>>x[i];
}

for (int i=1; i<=n; i++)
{
    l=1;
    while (l*k<=x[i])
    {
       l++;
    }
    l-=1;
    if ((abs(l*k-x[i]))<=abs(k*(l+1)-x[i])) x[i]=k*l;
    else x[i]=k*(l+1);
}

for (int i=n; i>=1; i--)
{
    cout << x[i] << " ";
}

return 0;
}


