#include <iostream>
#include <fstream>
using namespace std;
int a,b,s;
int main()
{
    fstream f("sum.in");
    ofstream g ("sum.out");
f>>a;
f>>b;
s=a+b;
g<<s;
     f.close();
     g.close();

    return 0;
}
