#include <fstream>

using namespace std;

int n,maxi,ok,f,g,v[200];

int main()
{
ifstream f("maximpar.in");
ofstream g("maximpar.out");

f>>n;

for (int i=1; i<=n; i++)
{
    f>>v[i];
}

for (int i=1; i<=n; i++)
{
    if (v[i]%2==0 && v[i]>maxi) {maxi=v[i];}
}
if (maxi!=0)
{
for (int i=1; i<=n; i++)
{
    if (v[i]==maxi) ok++;
}
g << maxi << " "<< ok;
}
else g<<-1;

f.close();
g.close();

return 0;
}

