#include <iostream>
#include <fstream>
using namespace std;
int a,b,f,g;
int main()
{
    ifstream f("maxim.in");
    ofstream g("maxim.out");
    f>>a;
    f>>b;
    if (a>b) g << a;
    else g << b;
    f.close();
    g.close();


return 0;

}
