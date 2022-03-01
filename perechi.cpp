#include <iostream>
#include <cmath>

using namespace std;

int n,a,b,a2,b2,d;

int main()
{
    cin >> n;

    for (int i=1; i<=n; i++)
{
    cin >> a >> b;
        {
            if (abs(a-b)>d) {d=abs(a-b); a2=a; b2=b;}
        }
}
    cout << a2 <<" "<< b2;

    return 0;
}
