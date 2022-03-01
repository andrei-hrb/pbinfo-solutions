#include <iostream>
#include <algorithm>

using namespace std;

int v[1001], x[1001], n, aux;
bool g=1;

int main()
{
    ios::sync_with_stdio(false);
    
    cin >> n;

    for (int i=1; i<=n; i++)
        {cin >> v[i];
        x[i]=v[i];}

    sort(v+1, v+n+1);

    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            if (v[i] == x[j]) {cout << j << " "; x[j]=0;}

    return 0;
}