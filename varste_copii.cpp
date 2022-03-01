#include <iostream>
using namespace std;
int a,b,x;
int main()
{
    cin >> a >> b;
    x=a-b;
    if (x==0) cout << "Copiii au varste egale";
        else if (x>0) cout << "Primul copil este mai mare cu " << x << " ani";
            else cout << "Al doilea copil este mai mare cu " << -x <<" ani";

    return 0;
}
