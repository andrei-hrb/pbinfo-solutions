#include <fstream>

using namespace std;

long long n,i,j,a[11],b[11];

int main()
{
fstream f("blackfriday.in");
ofstream g("blackfriday.out");

f>>n;

for (i=1;i<=n;i++)
    f>>a[i];

for (i=1;i<=n;i++)
    f>>b[i];

j=1;

for (i=2;i<=n;i++)
    if ( a[j]*(a[i]-b[i]) > (a[j]-b[j])*a[i] ) j=i;

g<<j;

return 0;
}
