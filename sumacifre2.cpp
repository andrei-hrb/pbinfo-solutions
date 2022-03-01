#include <iostream>
using namespace std;
int a;
int main()
{
    cin>>a;
    while (a>=10 && a<100)
    {
    cout << (a%10)+(a/10);
    break;
    }
    return 0;
}
