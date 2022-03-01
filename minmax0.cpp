#include <iostream>

using namespace std;

int v[1000],i,n,minim,maxim;

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

    minim=v[i];
    maxim=v[i];

    while (i<=n-1)
    {
        if (minim>=v[i+1]) minim=v[i+1];
        if (maxim<=v[i+1]) maxim=v[i+1];
        i++;
    }

    cout << minim << " " << maxim;
    return 0;
}