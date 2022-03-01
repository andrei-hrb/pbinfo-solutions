#include <iostream>
#include <fstream>
using namespace std;
int T,n,k,f,g,t;
int main()
{
 ifstream f("multiple.in");
 ofstream g("multiple.out");
 f>>T;
 for (int i=1; i<=T; i++)
 {
     f>>n;
     f>>k;
     t=n/k+1;
     for (int j=t*k; j<=100000000; j+=k)
     {
         if (j>n) {g<<j<<'\n'; break;}
     }
 }
 f.close();
 g.close();

return 0;
}
