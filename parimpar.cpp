#include <iostream>

using namespace std;

int a,b,x,y,n,m,w,z;

int main()

{
    ios::sync_with_stdio(false);

    cin >> a >> b;
    w=a;
    z=b;

    if (a%2==0) //a par
    {while (a!=0)
    {
        if ((a%10)%2==0) n=n*10+a%10;
        a/=10;
    }
    }
    else //a impar
    {while (a!=0)
    {
        if ((a%10)%2!=0) n=n*10+a%10;
        a/=10;
    }
    }

    while (n!=0)
    {
        x=x*10+(n%10);
        n/=10;
    }

    if (b%2==0)
    {while (b!=0) //b par
    {
        if ((b%10)%2==0) m=m*10+b%10;
        b/=10;
    }
    }
    else
    {while (b!=0) //b impar
    {
        if ((b%10)%2!=0) m=m*10+b%10;
        b/=10;
    }
    }

    while (m!=0)
    {
        y=y*10+(m%10);
        m/=10;
    }

    if (x>y) cout << w;
    if (y>x) cout << z;
    if (x==y) {if (w>z) cout << w;
               else cout << z;}
}

