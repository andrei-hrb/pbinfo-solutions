#include <iostream>
using namespace std;
int n;
char c,d;
int main()
{

    cin >> n;
    cin >> c >> d;

    if (n%2==0)
    {
    for (int i=1; i<=n; i++)
    {
    for (int j=1; j<=n/2; j++)
    {
    cout <<c<<d;
    }
    cout<<'\n';
    }
    }
    else
    {
    for (int i=1; i<=n; i++)
    {
    if (i%2==0)
        {for (int j=1; j<=n; j++)
        {
            if (j%2==0) cout<<c;
            else cout<<d;
        }
    cout<<'\n';
    }
    else {for (int j=1; j<=n; j++)
        {
            if (j%2==0) cout<<d;
            else cout<<c;
        }
        cout <<'\n';
    }}}
return 0;
}