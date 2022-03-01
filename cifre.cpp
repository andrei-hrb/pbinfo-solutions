#include <iostream>

using namespace std;
int n,s;
int main()
{
    cin >> n;
    s= n%100/10 + n%10;
    cout << s << '\n';
    return 0;
}
