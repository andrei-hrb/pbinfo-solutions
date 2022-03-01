#include <iostream>

using namespace std;

int a=1;
long long s;

int main()

{
ios::sync_with_stdio(false);

while(a>0)
{
    cin >> a;

    if (a>9)
    {
        while (a>99)
        {
            a/=10;
        }
        s+=a;
    }
}

cout << s;

return 0;
}
