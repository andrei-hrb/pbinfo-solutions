#include <iostream>
#include <iomanip>

using namespace std;

int n,d;
double s,ok;

int main()
{
    ios::sync_with_stdio(false);

    cin>>n;

    for(d=1; d*d<n; d++)
        {if(n%d==0) {s+=d; ok++;}
        if (n%(n/d)==0) {s+=n/d; ok++;}}

    if(d*d==n) {s+=d; ok++;}

    cout<<fixed<<setprecision(2)<<s/ok;

    return 0;
}
