#include <iostream>
#include <cmath>

using namespace std;

int inv(int n, int o)
{
   if (n==0) return o;
   else return inv(n/10,o*10+n%10);
}

int n,m,x[1001],y[1001],d=1000000001,e=1000000001;
int main()
{
ios::sync_with_stdio(false);
cin>>n;
for (int i=1; i<=n; i++)
{
cin >>x[i];
y[i]=inv(x[i],0);
if (abs(y[i]-x[i])<d) {d=abs(y[i]-x[i]);}
}

for (int i=1; i<=n; i++)
    if (x[i]<e && abs(x[i]-y[i])==d) e=x[i];

cout<<e;
}