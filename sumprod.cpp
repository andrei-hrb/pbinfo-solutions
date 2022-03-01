#include <iostream>
using namespace std;
int main()
{
    int R,a,b,c,f1,f2,f3;
    cin>>a>>b>>c;
    f1=a*b+c;
    f2=a*c+b;
    f3=b*c+a;
    if (f1>=f2) R=f1;
    else R=f2;
    if (f3>=R) R=f3;
    cout<<R;
    return 0;
}
