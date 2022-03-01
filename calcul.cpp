#include <iostream>
using namespace std;
int a,b,c;;
int main()
{
cin >> a;
b=(a/10)+(a%10);
c=(a/10)*(a%10);
if (0<=a && a<=15) cout << a*a;
if (16<=a && a<=30) cout <<b;
if (30<a && a<=99) cout <<c;


return 0;

}