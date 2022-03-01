#include <iostream>
#include <fstream>
using namespace std;
int f,g;
int main()
{
    int a,b,c,maxi;

    ifstream f("maxim3.in");
    ofstream g("maxim3.out");

    f>>a;
    f>>b;
    f>>c;

    if (a>=b) maxi=a;
    else maxi=b;
    if (c>=maxi) maxi=c;

    g<<maxi;

    f.close();
    g.close();

    return 0;
    }
