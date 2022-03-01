#include <iostream>
using namespace std;
int n,a;
int main()
{

    cin >> n;

    for (int i=1; i<=n; i++)
    {
        for (int j=i; j<=n; j++)
        {
            a=a+j*j;
            break;
        }
        cout << a << " ";
    }
return 0;
}
