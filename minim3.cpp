#include <iostream>
using namespace std;
int a,b,c,s;
int main()
{
    cin >> a >> b >> c;
    if (a<b) s=a;
    else s=b;
    if (s<c) cout << s;
    else cout << c;

    return 0;
}
