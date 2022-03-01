#include <iostream>
#include <cmath>
using namespace std;
int a,n,p=1;
int main()
{

    cin >> n>>a;

    for (int i=1; i<=a; i++)
    {
    p*=10;
    }
    cout<<p*n;
    return 0;
}
