#include <iostream>
using namespace std;
int a,b,P=1;
int main()
{

    cin >> a>>b;

    for (int i=1; i<=b; i++)
    {
    P*=a;
    }
    cout<<P;
    return 0;
}
