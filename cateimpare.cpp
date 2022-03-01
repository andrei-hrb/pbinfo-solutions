#include <iostream>
using namespace std;
int n=1,C;
int main()
{

    while (n!=0)
    {
       cin>>n;
       if (n%2!=0)C++;
    }

    cout<<C;
return 0;
}