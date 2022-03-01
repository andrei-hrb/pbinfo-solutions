#include <iostream>

using namespace std;

long long a;
int d,r,s,n;

int main()

{
    ios::sync_with_stdio(false);
    
    cin >> n >> r;

    for (int i=1; i<=n; i++)
        {
        cin >> a;
        s=0;
        while (a!=0)
        {
            s+=a%10;
            a/=10;
        }
        if (s%9==r) d++;
        }

    cout << d;
}
