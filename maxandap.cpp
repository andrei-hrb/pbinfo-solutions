#include <iostream>

using namespace std;

long x[1000],a;
int n,b,ok;

int main()
{


cin>>n;

for (int i=1;i<=n;i++)
    cin>>x[i];

for (int i=1;i<=n;i++)
    {
    ok=0;
    for (int j=1; j<=n; j++)
    {
        if (x[i]==x[j]) ok++;
    }
    if (ok>a) {a=ok; b=x[i];}
    }

cout << b<<" "<<a;
return 0;
}
