#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if (n%10<=(n/10)%10 && n%10>=n/100) {cout<<n%10; return 0;}
    if (n%10>=(n/10)%10 && n%10<=n/100) {cout<<n%10; return 0;}
    if ((n/10)%10<=(n/100) && (n/10)%10>=n%10) {cout<<n/10%10; return 0;}
    if ((n/10)%10>=(n/100) && (n/10)%10<=n%10) {cout<<n/10%10; return 0;}
    if (n/100<=(n/10)%10 && n/100>=n%10) {cout<<n/100; return 0;}
    if (n/100>=(n/10)%10 && n/100<=n%10) {cout<<n/100; return 0;}
}