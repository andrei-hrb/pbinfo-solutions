#include <iostream>
using namespace std;
int x,y;
int main()
{
    cin >> x;
    cin >> y;
    if (y%x==0) cout<<y/x;
           else cout<<y/x+1;

    return 0;
}
