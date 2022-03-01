#include <iostream>
using namespace std;
int main()
{
    int n=1,K=0;

    while (n!=0)
    {cin >> n;
    if (n%2==0) K++;}
    if (K-1==0) cout << "NU EXISTA";
    else cout<<K-1;
    return 0;
    }