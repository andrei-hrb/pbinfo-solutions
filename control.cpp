#include <iostream>

using namespace std;

int a,b,s;

int main()
{

ios::sync_with_stdio(false);

cin>>b;

while(b>9)
{
    s=0;
    a=b;
    while (a>0)
    {
        s+=a%10;
        a/=10;
    }
    b=s;
}

cout << b;

return 0;
}
