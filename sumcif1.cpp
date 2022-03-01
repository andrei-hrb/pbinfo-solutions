#include <iostream>

using namespace std;

int n,i,d,x[11];

int main()
{

ios::sync_with_stdio(false);

    cin >>n;

    while (n>0)
    {
        i++;
        x[i]=n%10;
        n/=10;
    }

    for (int j=1; j<=i; j++)
        if (j%2==0) d+=x[j];

cout << d;

return 0;
}
