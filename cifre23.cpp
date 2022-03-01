#include <iostream>

using namespace std;

long long n;
int p,i;

int main()
{
    ios::sync_with_stdio(false);

    cin>>n;
    
    while (n!=0)
    {
        if (n%10==2) p++;
        else i++;
        n/=10;
    }
    
    if (p>i) cout << 2;
    if (p<i) cout << 3;
    if (p==i) cout << 2<<" "<<3;

    return 0;
}