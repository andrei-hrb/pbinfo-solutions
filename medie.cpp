#include <iostream>
#include <iomanip>
using namespace std;
int n,a;
double S,M,C;
int main()
{
    cin >> n;

    for (int i=1; i<=n; i++)
    {
       cin>>a;
       if (a%2==0) {C++,S+=a;}
    }

    M=S/C;

    cout<<setprecision(4)<<M;
return 0;
}