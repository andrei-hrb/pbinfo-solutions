#include <iostream>
#include <math.h>
using namespace std;
double d1,d2;
int main()
{
    cin >> d1 >> d2;
    cout << 4*(sqrt(d1*d1 + d2*d2))/2 << " " << d1*d2/2;
    return 0;
}
