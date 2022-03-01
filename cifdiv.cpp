#include <iostream>
using namespace std;
short int ok;
int main()
{
    int m,n;

    cin >> n >> m;

    if (n%10!=0) if (m%(n%10)==0) ok++;
    if (n/10%10!=0) if (m%(n/10%10)==0) ok++;
    if (n/100!=0) if (m%(n/100)==0) ok++;
    cout << ok;
    }
