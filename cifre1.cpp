#include <iostream>

using namespace std;

int n;
long long a,e,b,x,d;

int main()
{

ios::sync_with_stdio(false);

    cin >>n;

    for (int i=1; i<=n; i++)
    {
        cin >> a;
        b=a;
        while (a>0)
        {
            x=a;
            a/=10;
        }
        if (x>d) {d=x; e=0;}
        if (d==x) if (b>e) e=b;
    }

cout << e;

return 0;
}
