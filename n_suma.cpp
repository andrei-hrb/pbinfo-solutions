#include <iostream>
#include <fstream>

using namespace std;

int n,a,s,i=1;
int main()
{
    ifstream f("n_suma.in");
    ofstream g("n_suma.out");

    f >> n;

    while (i<=n)
    {
        f >> a;
        s+=a;
        i++;
    }

    g << s;

    f.close();
    g.close();

    return 0;
}