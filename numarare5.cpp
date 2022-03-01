#include <cstdio>
#include <iostream>

using namespace std;

int v[200],n,m,a,b,ok,s1,s2;

int main()
{
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        scanf("%d", &m);
        v[i]=m;
    }

    for (int i=1; i<=n; i++)
    {
        for (int j=i+1; j<=n; j++)
        {
            s1=0;
            s2=0;
            a=v[i];
            b=v[j];
            while (a!=0)
            {
                s1+=a%10;
                a/=10;
            }
            while (b!=0)
            {
                s2+=b%10;
                b/=10;
            }
            if (s1==s2) ok++;
        }
    }

    printf("%d",ok);

    return 0;
}
