#include <iostream>

using namespace std;

int v[1000],i,n,pa,im;

int main()
{
    cin >> n;

    i=1;

    while (i<=n)
    {
        cin>>v[i];
        i++;
    }

    i=1;

    while (i<=n)
    {
        if (v[i]%v[n]==0) cout << v[i] << " ";
        i++;
    }

    return 0;
}
