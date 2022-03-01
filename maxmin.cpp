#include <iostream>
using namespace std;
int a,b,c,s,t,x1,x2,mm;
int main()
{
    cin >> a >> b >> c;
    if (a>b) s=a;
    else s=b;
    if (b>c) t=b;
    else t=c;
    if (s>t) x1=s;
    else x1=t;

    if (a>b) s=b;
    else s=a;
    if (b>c) t=c;
    else t=b;
    if (s>t) x2=t;
    else x2=s;

    mm=x1-x2;

    if (mm>0) cout << mm;
    else cout <<-mm;
    return 0;
}
