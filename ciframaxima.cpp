#include <iostream>

using namespace std;

int n,d;

int main()
{
    ios::sync_with_stdio(0);

    cin >> n;

    while (n!=0)
    {
        if (n%10>d) d=n%10;
        n/=10;
    }

    cout << d;

    return 0;
}
