#include <iostream>
#include <algorithm>

using namespace std;

int x[1000001],n,m,d[1000001],k,e,a;

void citire()
{
    cin >> m >> n;

    for (int i = 1; i <= n*m; i++)
        {cin  >> a;
        x[a]++;}

}

void transformare()
{
    for (int i = 1; i <= 1000000; i++)
        if (x[i] > e) e = x[i];

    for (int i = 1; i <= 1000000; i++)
        if (x[i] == e) {d[k] = i; k++;}

    sort (d, d+1000000, greater <int>());
}

void scriere()
{
    cout << d[0];
}


int main()

{
    ios::sync_with_stdio(false);

    citire();
    transformare();
    scriere();

    return 0;
}