#include <iostream>

using namespace std;

int n,a,b,x[1000],y[1000],d=100,e;

int main()
{

ios::sync_with_stdio(false);

    cin >> n;

    for (int i=1; i<=n; i++)
    {
        cin >> a;
        b=a;
        y[i]=a;
        while (b>0)
        {
            x[i]+=b%10;
            b/=10;
        }
        if (x[i]<d) d=x[i];
        if (x[i]>e) e=x[i];
    }

    for (int i=1; i<=n; i++)
        if (x[i]==d) {cout << y[i] << '\n'; break;}

    for (int i=1; i<=n; i++)
        if (x[i]==e) {cout << y[i]; break;}

return 0;
}
