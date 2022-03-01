#include <iostream>
#include <cmath>

using namespace std;

int inv(int n,int o)
{
    while (n>0)
    {
        o=o*10+n%10;
        n/=10;
    }
    return o;
}

int n,s,t,e,d,n1,n2;

int main()
{

ios::sync_with_stdio(false);

cin >> n;

while (n>0)
{
    if (n%10%2==0) n1=n1*10+n%10;
    else n2=n2*10+n%10;
    n/=10;
}

n1=inv(n1,0);
n2=inv(n2,0);

cout <<abs(n1-n2);

return 0;
}
