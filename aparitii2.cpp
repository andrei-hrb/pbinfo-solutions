#include <iostream>
using namespace std;
int n, m, a;
int main ()
{
    cin>>n; 
    m=n;
    while (m>9) m=m/10; 
    a=1;
    while (n>9)
    {if (m==n%10) a++; n=n/10;}
    cout<<a;
    return 0;
}