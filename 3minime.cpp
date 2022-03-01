#include <iostream>

using namespace std;

int n,a=10000,b=10000,c=10000,ok,x[100];

int main()
{


cin>>n;

for (int i=1;i<=n;i++)
    cin>>x[i];

for (int i=1;i<=n;i++)
    if (a>x[i]) a=x[i];

for (int i=1;i<=n;i++)
    if (a==x[i]) {x[i]=10000; break;}

for (int i=1;i<=n;i++)
    if (b>x[i]) b=x[i];

for (int i=1;i<=n;i++)
    if (b==x[i]) {x[i]=10000; break;}

for (int i=1;i<=n;i++)
    if (c>x[i]) c=x[i];

cout << c<<" "<<b<<" "<<a;

return 0;
}
