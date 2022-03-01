#include <iostream>

using namespace std;

long long n,p=1;
int ok;

int main()
{
    ios::sync_with_stdio(false);

    cin >> n;

    while (n!=0)
    {
        if ((n%10)%2!=0) {p*=n%10; ok++;}
        n/=10;
    }

    if (ok==0) cout << -1;
    else cout << p;

    return 0;
}
