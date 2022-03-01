#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    long int n;

    cin>>n;

     int k = n%10;

     n /=10;

     while (n&&(k%2!=0)) {
           k=n%10; n/=10;
     }
     if (k%2==0) cout<<k;
     else cout<<"-1";
    return 0;
}
