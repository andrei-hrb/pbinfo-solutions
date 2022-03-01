#include <iostream>
using namespace std;
int n,a,k;
int main()
{
    cin>>n;

    for (int i=1; i<=n; i++)
    {
        cin>>a;
        if (k!=0) continue;
        if (a%2==0) k=a;
    }

    if (k!=0) cout<<k;
    else cout << "IMPOSIBIL";

return 0;
}
