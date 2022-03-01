#include <iostream>
using namespace std;
int n,m=1,S;
int main()
{

    while (S!=1000000000)
    {
       cin>>n;
       S+=n;
       if (n==m) break;
       m=n;
    }

    cout<<S;
return 0;
}