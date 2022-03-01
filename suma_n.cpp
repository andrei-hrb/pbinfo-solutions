#include <iostream>
using namespace std;
int n,a,S;
int main()
{

    cin >> n;

    for (int i=1; i<=n; i++)
    {
        cin>> a;
        S+=a;
    }

    cout<<S;
return 0;
}