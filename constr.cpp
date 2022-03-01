#include <cstdio>
#include <iostream>

using namespace std;

int x[200],y[200],n,m,a,b,ok,s1,s2;

int main()
{
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        scanf("%d", &m);
        x[i]=m;
    }

    for (int i=1; i<=n; i++)
    {
            s1=0;
            a=x[i];
            while (a!=0)
            {
                s1+=a%10;
                a/=10;
            }
            y[i]=x[i]%s1;
            printf("%d",y[i]);
            printf(" ");
    }


    return 0;
}