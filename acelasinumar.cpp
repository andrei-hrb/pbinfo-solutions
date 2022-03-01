#include <iostream>
using namespace std;
int n,k,a,S;
int main()
{
    cin >> n >> k;

    S=n;

    for (int i=1; i<=k; i++)
    {
       cin>>a;
       S+=a;
    }

    if (S==n) cout<<"DA";
    else cout<<"NU";

return 0;
}