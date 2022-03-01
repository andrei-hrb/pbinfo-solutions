#include <iostream>
using namespace std;
int suma(int n,int v[1000])
{ int s=0;
for(int i=2;i<=n-1;i++)
if(v[i]>v[i-1]&&v[i]>v[i+1])
s=s+v[i];
return s;}
int main()
{ int n,v[1000],i; cin>>n;
for(i=1;i<=n;i++)
{cin>>v[i];}
cout<<suma(n,v);
}
