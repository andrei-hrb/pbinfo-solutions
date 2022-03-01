#include <iostream>

using namespace std;
int n;
int main()
{
    cin >> n;
    cout << ((n%10) + (n/100%10)*10) << '\n';
    return 0;
}
