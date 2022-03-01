#include <iostream>
#include <algorithm>

using namespace std;

int v[10000],n,m;

void citire()
{
    cin >> n >> m;

    for (int i = 0; i < n*m; i++)
            cin >> v[i];
}


int scriere()
{
    sort (v,v+(n*m),greater<int>());

    for (int i = 1; i <= n*m; i++)
        if (v[i] == v[i-1]) {cout << v[i]; return 0;}

    cout << "IMPOSIBIL";
}

int main()

{
    ios::sync_with_stdio(false);

    citire();
    scriere();

    return 0;
}
