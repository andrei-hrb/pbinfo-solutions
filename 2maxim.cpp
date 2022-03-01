#include <iostream>

using namespace std;

int n,a,b,ok,x[1000];

int main()
{


cin>>n;

for (int i=1;i<=n;i++)
    cin>>x[i];

for (int i=1;i<=n;i++)
    if (a<x[i]) a=x[i];

for (int i=1;i<=n;i++)
    if (a==x[i]) {x[i]=0; break;}

for (int i=1;i<=n;i++)
    if (b<x[i]) b=x[i];

cout << a<<" "<<b;
return 0;
}
