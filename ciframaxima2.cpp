#include <iostream>

using namespace std;

int n,d,e;

int main ()
{
    ios::sync_with_stdio(false);

    cin >> n;

    while (n>0)
    {
            if (n%10>d) {d=n%10; e=0;}
            if (n%10==d) e++;
            n/=10;
    }
    if (d==0) cout<<"0 1";
    else cout << d << " " << e;

    return 0;
}