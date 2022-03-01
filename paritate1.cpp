#include <iostream>
#include <cmath>

using namespace std;

int v[1000],i,n,pa,im;

int main()
{
    cin >> n;

    i=1;

    while (i<=n)
    {
        cin>>v[i];
        if (v[i]%2==0) pa++;
        else im++;
        i++;
    }

    cout<<abs(pa-im);

    return 0;
}
