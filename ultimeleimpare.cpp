#include <iostream>
using namespace std;
int n,k,x,y;
int main()
{
    cin >> n;

    for (int i=1; i<=n; i++)

    {
    cin >> k;
    if (k%2!=0) {x=y; y=k;}
    }

    if (x==0 || y==0) cout << "Numere insuficiente";
    else cout << x << " " << y;

return 0;
}