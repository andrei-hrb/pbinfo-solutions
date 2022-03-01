
#include <iostream>

using namespace std;

int n,x,y,val;

int main()
{

    cin >> n >> x >> y >> val;
    cout << n*(x-1)+y << " ";
    if(val%n==0)
        cout << val/n << " " << n;
    else
        cout << val/n+1 << " " << val%n;

    return 0;

}
