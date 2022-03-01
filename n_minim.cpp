#include <iostream>

using namespace std;

int n;

long long maxi,a;

int main()
{

cin>>n;
long long x[n];

for (int i=1; i<=n; i++)
{
    cin>>a;
    x[i]=a;
}

maxi=x[1];

for (int i=2; i<=n; i++)
{
    if (x[i]<maxi) maxi=x[i];
}

cout<<maxi;


return 0;
}
