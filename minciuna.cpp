#include <iostream>

using namespace std;
unsigned int x,y;
int main()
{
    cin >> x >> y;
    if (y>x)
    {
    if (x%2==0 && x+1==y) cout << "Andrei e mai responsabil";
    else cout << "minciuna";
    }
    else
    {
    if (y%2==0 && y+1==x) cout << "Andrei e mai responsabil";
    else cout << "minciuna";
    }
    return 0;
}