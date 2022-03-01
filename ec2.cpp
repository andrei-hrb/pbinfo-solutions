#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double a,b,c,x1,x2,delta;
int main()
{
    cin >> a >> b >> c;

    delta = b*b - 4*a*c;

    if (delta < 0) {cout << "Nu are solutii reale"; return 0;}

    if (delta==0)
    {
    x1 = -b/(2*a);

    cout<<"Radacina dubla "<<fixed<<setprecision(2)<<x1;
    }

    if (delta>0)
    {
    x1 = (-b + sqrt(delta)) / (2 * a);

    x2 = (-b - sqrt(delta)) / (2 * a);

    cout << fixed << setprecision(2) <<  x1 <<" "<< x2;
    }

    return 0;
}
