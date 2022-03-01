#include <iostream>
using namespace std;
int n,k,l,ok=0;
int main()
{

    cin >> n>>k;

    if(n%10==0)
    {
    l=n;
    while (l!=0)
    {
        ok++;
        l/=10;
    }
    cout<<1;

    for (int i=1; i<=k; i++)
    {
    for (int j=1; j<=ok-1; j++) cout << 0;
    }
    }
    return 0;
}
