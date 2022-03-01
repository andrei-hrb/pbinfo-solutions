#include <iostream>
using namespace std;
int n,k,C=1;
int main()
{
    cin >> n;

    while (n!=1)
    {
        C++;

        if (n%2==0) n=n/2;
        else n=3*n+1;

    }

    cout << C;

return 0;
}