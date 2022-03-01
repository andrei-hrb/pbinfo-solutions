#include <iostream>

using namespace std;
int a;
int main()
{
    cin >> a;

    if (a<10) cout << "1";
    if (a<100 && a>=10) cout << "2";
    if ( a<1000 && a>=100) cout << "3";
    return 0;
}
