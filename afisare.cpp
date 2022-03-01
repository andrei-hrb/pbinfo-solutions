#include <iostream>

using namespace std;

int v[1000],i,n;

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
        if (i%2==0) cout << v[i] << " ";
        i++;
    }

    cout<<'\n';

    i=n;

    while (i>=1)
    {
        if (i%2!=0) cout << v[i] << " ";
        i--;
    }

    return 0;
}
