#include <iostream>

using namespace std;

int n,m,d;

bool prim(int a,int l) // l = 5!
{
    if (a <= 1) return false;
    else
    {if (a <= 3) return true;
    else {if (a % 2 == 0 || a % 3 == 0) return false;}}

    while (l * l <= a)
    {
        if (a % l == 0 || a % (l + 2) == 0) return false;
        l+=4;
    }

    return true;
}



int main()

{
    ios::sync_with_stdio(false);

    cin >> n >> m;

    if (n > m)
    {
        int aux = n;
        n = m;
        m = aux;
    }

    for (int i = n; i <= m; i++)
        if (prim (i,5) == true) d++;

    cout << d;

    return 0;
}
