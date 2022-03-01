#include <iostream>

using namespace std;

int v[10000],n,m;
int c[10001];
long long s;

void citire()
{
    cin >> n >> m;

    for (int i = 0; i < n*m; i++)
    {
        cin >> v[i];
        c[v[i]]++;
        if (v[i] % 2 == 0 && c[v[i]] == 1) s+=v[i];
    }
}


void scriere()
{
    cout << s;
}

int main()

{
    ios::sync_with_stdio(false);

    citire();
    scriere();

    return 0;
}
