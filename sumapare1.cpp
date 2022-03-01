#include <iostream>
using namespace std;
int n=1,S;
int main()
{

    while (n!=0)
    {
       cin>>n;
       if (n%2==0)S+=n;
    }

    cout<<S;
return 0;
}