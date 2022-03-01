#include <iostream>

using namespace std;

int inv(int n, int o)

{  
   if (n == 0) return o;
   else return inv(n/10,o*10+n%10);
}

int main(int n)
{
cin>>n;
cout <<inv(n,0);
}
