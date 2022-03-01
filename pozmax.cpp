#include <fstream>

using namespace std;

int f,g,n,p,u;
double maxi;

int main()

{
    ifstream f("pozmax.in");
    ofstream g("pozmax.out");

    f>>n;
    double x[n];

    for (int i=1; i<=n; i++)
    {
        f>>x[i];
        if (x[i]>maxi) maxi=x[i];
    }

    for (int i=1; i<=n; i++)
        if (x[i]==maxi) {p=i; break;}

    for (int i=n; i>=1; i--)
        if (x[i]==maxi) {u=i; break;}

    g<<p<<" "<<u;

    f.close();
    g.close();

    return 0;
}
