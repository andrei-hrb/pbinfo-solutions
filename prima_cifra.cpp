#include <iostream>
#include <cmath>

using namespace std;

int a,n,s,m,ok,o;

int main()
{

ios::sync_with_stdio(false);

cin >> n;

for (int i=1; i<=n; i++)
{
    ok=0;
    cin >> a;
    m=a;
    while (m>0)
    {
        ok++;
        m/=10;
    }
    o=a/pow(10,ok-1);
    s+=o;
}

cout <<s;

return 0;
}
