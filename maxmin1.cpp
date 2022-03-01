#include <iostream>

using namespace std;

int x[100],y[100],n,m,ok,o;

int main()
{
    cin >> n;

for (int i=1; i<=n; i++)
{
    cin >> x[i];
}

    cin >> m;

for (int i=1; i<=m; i++)
{
    cin>>y[i];
}

for (int i=1; i<=n; i++)
{
    for (int j=1; j<=m; j++)
    {
          if (x[i]>y[j]) {ok++;}
    }
    if (ok==m) o++;
    ok=0;
}

cout <<o;
return 0;
}

