#include <iostream>

using namespace std;
int a,P;
int main()
{
    cin >> a;
    P=((a%10) + (a/100%10)*10)*((a%10) + (a/100%10)*10);
    cout << P << '\n';
    return 0;
}
