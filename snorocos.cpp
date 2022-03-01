#include <iostream>

using namespace std;

int n,s,i,j,l;

int main()
{
    cin >> n;

    for (i=1; i<=n; i++)
    {
        for (j=i; j<=i+n-1; j++)
        {
            s=s+j;
        }
        if (s==n*n) {for (l=j-n; l<=j-1; l++)
                           {cout << l << " ";} return 0;}
        else s=0;
    }
    
    if (s==0) cout << "NU ESTE NOROCOS";
    
    return 0;
}
