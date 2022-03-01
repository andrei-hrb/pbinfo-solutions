#include <iostream>
using namespace std;
int a, b, c;
int main()
{
cin>>a>>b>>c;
if(a==b && a==c) cout<<1;
else if(a==b && a!=c) cout<<2;
else if(b==c && b!=a) cout<<2;
else if(a==c && a!=b) cout<<2;
else if(a!=b && b!=c && a!=c) cout <<3;
return 0;
} 