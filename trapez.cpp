#include <iostream>
#include <cmath>
using namespace std;
double B,b,l,d;
int main()
{
    cin>>B;
    cin>>b;
    cin>>l;
    d=sqrt(b*b+l*l+b*(B-b));
    cout <<d;
    return 0;
}
