#include <iostream>

using namespace std;

int x[1000],n,a;

int main()
{
    cin >> n;

for (int i=1; i<=n; i++)
{
    cin >> x[i];
}


for (int i=1; i<=n; i++)
{
    a=x[i];
    for (int j=i+1; j<=n; j++)
    {
        if (x[i]<x[j]) {x[i]=x[j]; break;}
    }
    if (a==x[i]) x[i]=-1;
}

for (int i=1; i<=n; i++)
{
    cout << x[i] << " ";
}


return 0;
}


