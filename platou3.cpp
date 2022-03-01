#include <fstream>

using namespace std;
int x[1001],n,d,e;

int main()

{
    ifstream f("platou3.in");
    ofstream g("platou3.out");

    f>>n;

    for (int i=1; i<=n; i++)
        f>>x[i];

    for (int i=1; i<=n; i++)
    {
        if(x[i]>0) d++;
        else d=0;
        if (d>e) e=d;
    }

    g<<e;

        f.close();
        g.close();

    return 0;
}

