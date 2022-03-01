#include <iostream>
using namespace std;
int a=1,n,p,i;
int main()
{

    cin >> n>>p;
    for (i=0; i<=1000; i++)
    {
        for (int j=1; j<=i; j++)
        {
           a*=n;
        }
    if (a>p) return 0;
    cout<<a<<" ";
    a=1;
    }
}
