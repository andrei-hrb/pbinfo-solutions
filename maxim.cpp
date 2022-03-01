#include <iostream>

using namespace std;

int ok,a=1,maxi;

int main()
{

while (a!=0)
{
    ok++;
    cin>>a;
    if (a>maxi) maxi=a;
}
if (ok==1 && a==0) cout << "NU EXISTA";
else cout << maxi;

return 0;
}

