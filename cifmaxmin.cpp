#include <iostream>

using namespace std;

int a,x,y=9;

int main()
{

ios::sync_with_stdio(false);

    cin >> a;
    if (a==0) {cout << 0; return 0;}
    
    while (a>0)
    {
        if (a%10>x) x=a%10;
        if (a%10<y) y=a%10;
        a/=10;
    }

cout <<x+y;

return 0;
}
