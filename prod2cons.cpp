#include <iostream>
using namespace std;
int main()
{
    int n;

    cin>>n;

    for (int i=1; i<=n/2; i++)
    {
        if (n==i*(i+1)) {cout<<i<<" "<<i+1; return 0;}
    }

    cout <<"NU EXISTA";

    return 0;
}