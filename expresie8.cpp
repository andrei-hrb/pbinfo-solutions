#include <fstream>
using namespace std;

ifstream fin("expresie8.in");
ofstream fout("expresie8.out");



short v[1002],n;
int main() {short i;
unsigned x1,x2,x3=0;
long long s=0, d1=0,d2=0,d3=0 ;
fin >> n;

    for (i = 1; i <=n; ++i) {
        fin >> v[i];
        s += v[i];
    }

    for (i = 1; i < n ; ++i)
        if (v[i] * v[i + 1] > d1&&i!=x3) {
            d1 = v[i] * v[i + 1];
            x1 = i;
        }

   for (i = 1; i < n ; ++i)
        if ((v[i] * v[i + 1] > d2) && (i!=x1-1)&&i!=x1&&i!=x1+1) {
            d2 = v[i] * v[i + 1];
            x2 = i;
        }

   for (i = 1; i < n - 1; ++i)
        if ((long long)v[i] * v[i + 1]*v[i+2] > d3) {
            d3 = (long long)v[i] * v[i + 1]*v[i+2];
            x3 = i;
        }

if((long long)d1+d2>d3) s=s-(v[x1] + v[x1 + 1]+v[x2]+v[x2+1])+d2+d1;
else s=s-v[x3]-v[x3+1]-v[x3+2]+d3;


    fout << s;
    fin.close();
    fout.close();

    return 0;}
