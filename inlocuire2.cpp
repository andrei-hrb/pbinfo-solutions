#include <iostream>

using namespace std;

int n,x[11],c1,c2,i;

int main()
{
ios::sync_with_stdio(false);

cin>>n>>c1>>c2;

if (n==0) {if (c1==0) {cout <<c2; return 0;}
           else {cout << "0"; return 0;}}

n=n*10;

do
{
    x[i]=n%10;
    i++;
    n/=10;
}
while (n>0);

for (int j=i-1; j>=1; j--)
    {if (x[j]==c1) cout <<c2;
    else cout<<x[j];}
}


