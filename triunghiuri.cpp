#include <iostream>

using namespace std;

int x[100],n,a,b,c,ok;

int main()
{
    cin >> n;

for (int i=1; i<=n; i++)
{
    cin >> x[i];
}


for (int i=1; i<=n-2; i++)
{
    for (int j=i+1; j<=n-1; j++)
    {
        for (int l=j+1; l<=n; l++)
        {
            a=x[i];
            b=x[j];
            c=x[l];
            if (a+b>c && a+c>b && b+c>a) {ok++;}
        }
    }
}

cout << ok;

return 0;
}


