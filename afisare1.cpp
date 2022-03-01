#include <iostream>

using namespace std;

int v[1000],i,j,n,b;

int main()
{
    cin >> n;

    i=0;

    while (i<=n-1)
    {
        cin>>v[i];
        i++;
    }

    i=0;


    while (b<=n-1)
    {
        j=i;
        cout << v[i] << " ";
        i=n-1-i;
        b++;
        if (b==n) break;
        cout << v[i] << " ";
        i=j+1;
        b++;
    }

    return 0;
}