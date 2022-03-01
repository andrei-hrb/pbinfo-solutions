#include <iostream>
using namespace std;
int n;
int main ()
{
    cin>>n;
    if (n%4==0 && n%100!=0 || n%400==0) cout<<"bisect";
    else cout <<"nebisect";
    return 0;
}