#include <cstdio>

using namespace std;

int x[200],n,m,i,a,b,ok;

int main()
{
    scanf("%d",&n);

    i=1;

    while (i<=n)
    {
        scanf("%d",&m);
        x[i]=m;
        i++;
    }

    i=1;

    while (i<=n-1)
    {
        a=x[i];
        b=x[n];
        while(a!=b)
        {
            if (a>b) a-=b;
            else b-=a;
        }

        if (b==1) ok++;
        i++;
    }

printf ("%d",ok);

return 0;
}


