#include <fstream>

using namespace std;

int f,g,n,x[300],mini=1000000,minii=1000000;

int main()

{
    ifstream f("minimdoua.in");
    ofstream g("minimdoua.out");

    f>>n;

    for (int i=1; i<=n; i++)
        {f>>x[i];
        if (x[i]>9 && x[i]%10==x[i]%100/10 && x[i]<mini) mini=x[i];}

    for (int i=1; i<=n; i++)
         if (mini==x[i]) {x[i]=0; break;}

    for (int i=1; i<=n; i++)
         if (x[i]>9 && x[i]%10==x[i]%100/10 && x[i]<minii) minii=x[i];


    if (mini!=1000000 && minii!=1000000)
          g<<mini<<" "<<minii;
    else
          g<<"numere insuficiente";

    f.close();
    g.close();

    return 0;
}