#include <iostream>

using namespace std;

int n,ok,x[9];

int main ()
{
    ios::sync_with_stdio(false);

    cin >> n;

    for (int i=1; i<=8; i+=2)
    {
        x[i]=n/10%10;
        x[i+1]=n%10;
        n/=100;
        ok++;
        if (n==0) break;
    }

    for (int i=ok*2; i>=1; i--)
        cout <<x[i];

    return 0;
}
