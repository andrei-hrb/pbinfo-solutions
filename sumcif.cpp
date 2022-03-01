#include <iostream>

using namespace std;
int a;
int main()
{
    cin >> a;
    cout <<a%10 + a/10%10 + a/100%10 << '\n';
    return 0;
}
