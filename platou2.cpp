#include <fstream>

using namespace std;
int x[1001],n,d=1,e;

int main()

{
    ifstream f("platou2.in");
    ofstream g("platou2.out");

    f>>n;

    for (int i=1; i<=n; i++)
        f>>x[i];

    for (int i=1; i<=n-1; i++)
    {
        if(x[i]<x[i+1]) d++;
        else d=1;
        if (d>e) e=d;
    }

    g<<e;

        f.close();
        g.close();

    return 0;
}

