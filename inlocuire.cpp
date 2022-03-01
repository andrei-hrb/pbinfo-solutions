#include <iostream>

using namespace std;

int y[200],x[200],i,n,m;
double s,t,l;

int main()
{
    cin >> n;

    t=n;

    i=1;

    while (i<=n)
    {
        cin >> x[i];
        s+=x[i];
        if (x[i]==0) t-=1;
        i++;
    }

    i=1;

    l=s/t;
    
    while (i<=n)
    {
        if (x[i]==0) x[i]=l;
        i++;
    }
i=1;

while (i<=n)
{
    cout << x[i] << " ";
    i++;
}

return 0;
}


