#include <iostream>

using namespace std;

int n,d,e;

int main ()
{
    ios::sync_with_stdio(false);

    cin >> n;

    while (n!=0)
        {
            if (n<100 && n>9) {e=n%10; d=n/10;}
            n/=10;
        }

    cout << d+e;

    return 0;
}
