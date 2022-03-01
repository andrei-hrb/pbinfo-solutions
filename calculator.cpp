#include <iostream>
using namespace std;
long long A,B,R;
char a;
int main ()
{
    cin >> A >> B >> a;
    if (a=='+') R=A+B;
    if (a=='*') R=A*B;
    if (a=='-')
    {
        if (A>=B) R=A-B;
        else R=B-A;
    }
    if (a=='/')
    {
        if(A>=B) R=A/B;
        else R=B/A;
    }
    cout<<R;
    return 0;
}