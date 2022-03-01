#include <iostream>
#include <cmath>
using namespace std;
long long P,K;
int main ()
{
    cin>>P>>K;
    if (K%2==0) cout<<(10+P)+30*(K/2-1);
    else cout<<P+30*(K/2);
    return 0;
}