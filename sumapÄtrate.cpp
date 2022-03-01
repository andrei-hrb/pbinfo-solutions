#include<iostream> 
#include<algorithm>
  using namespace std;
  int y, z, i, j, n, x, m, k, u[5], aux, ok, w[1005];
 int v[1005];
 long long p, s, a, b, c;
  int main(void) 
{
     cin>>n; 
    n=n%10234573;
     a=n; 
b=n+1; 
c=2*n+1;
     if(a%2==0) a/=2;
     if(a%3==0) a/=3;
     if(b%2==0) b/=2; 
    if(b%3==0) b/=3;
     if(c%3==0) c/=3;
     x=(((a*b)%10234573)*c)%10234573;
     cout<<x; 
    return 0;
 }