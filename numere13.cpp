#include <iostream>
#include <cmath>

using namespace std;

int a=1,b=1,ok1,ok2,m,n,q,x,y;

int main()
{

ios::sync_with_stdio(false);

while (a!=0 && b!=0)
{
    ok1=0;
    ok2=0;

    cin >> a>>b;

    if (a==0 && b==0) break;

    m=a;
    n=b;

    while (m>0)
    {
        ok1++;
        m/=10;
    }

    while (n>0)
    {
        ok2++;
        n/=10;
    }

    x=a/pow(10,ok1-1);
    y=b/pow(10,ok2-1);

    if (y==x) q++;
}

cout <<q;

return 0;
}
