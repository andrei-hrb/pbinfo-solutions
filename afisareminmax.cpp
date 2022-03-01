#include <iostream>

using namespace std;

int v[1000],i,n,minim,maxim,j,J,aux;

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

    while (i<=n)
    {
        if (minim>=v[i]) {minim=v[i]; j=i;}
        if (maxim<=v[i]) {maxim=v[i]; J=i;}
        i++;
    }

    if (J<=j)
    {
        aux=j;
        j=J;
        J=aux;
    }

    while (j<=J)
    {
        cout << v[j] << " ";
        j++;
    }


    return 0;
}
