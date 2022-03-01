#include <iostream>

using namespace std;

int a,b,aux,m,p,ok;

int main()
{

ios::sync_with_stdio(false);

    cin>>a>>b;

    if (a>b)
    {
        aux=a;
        a=b;
        b=aux;
    }

    for (int n=a; n<=b; n++)
    {
        p=0;
        m=n;
        while (m>0)
        {
            p=p*10+m%10;
            m/=10;
        }
        if (p==n) ok++;
    }

    cout << ok;

return 0;
}
