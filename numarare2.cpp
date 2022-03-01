#include <iostream>

using namespace std;

int v[200],i,n,j;
double s;

int main()
{
    cin >> n;

    i=1;

    while (i<=n)
    {
        cin>>v[i];
        s+=v[i];
        i++;
    }

    s=s/n;

    i=1;

    while (i<=n)
    {
        if (v[i]>=s) j++;
        i++;
    }

    cout << j;

    return 0;
}
