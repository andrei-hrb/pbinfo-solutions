#include <iostream>
using namespace std;
int n,d;

int main()
{
    ios::sync_with_stdio(0);

    cin >> n;

    while (n!=0)
    {
        if (n%10>d && (n%10)%2!=0) d=n%10;
        n/=10;
    }

    if (d!=0) cout<<d;
    else cout<<"nu exista";

    return 0;
}
