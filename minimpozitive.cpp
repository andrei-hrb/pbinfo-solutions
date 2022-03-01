#include <iostream>

using namespace std;

int a=1,maxi=1000000;

int main()
{

while (a!=0)
{
    cin>>a;
    if (a>0 && a<maxi) maxi=a;
}
if (maxi==1000000) cout << "NU EXISTA";
else cout << maxi;

return 0;
}

