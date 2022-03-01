#include <iostream>
#include <cmath>

using namespace std;

int n,a,b,i2,d=1000;

int main()
{
    cin >> n;

    for (int i=1; i<=n; i++)
{
    cin >> a >> b;
        {
            if (abs(a-b)<=d) {d=abs(a-b); i2=i;}
        }
}
    cout << i2;

    return 0;
}
