#include <cstdio>

using namespace std;

int x[200],y[200],n,m,j,g,s;

int main()
{
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {
        scanf("%d",&m);
        x[i]=m;
    }

    for (int i=1; i<=n; i++)
    {
        g++;

        for (int j=1; j<=n; j++)
        {
         if (g!=j) s+=x[j];
        }

        y[i]=s;

        s=0;
    }

    for (int i=1; i<=n; i++)
    {
        printf("%d",y[i]);
        printf(" ");
    }

return 0;
}
