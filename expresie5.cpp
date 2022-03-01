#include <iostream>

using namespace std;

int n,i=1,j=1;
long long S,s=1;
int main()
{
    cin>>n;

    while (i<=n)
    {
       j=1;
       s=1;
       while (j<=i)
       {
           s*=i;
           j++;
       }
       S+=s;
       i++;
    }

    cout<<"Rezultatul este "<<S;

    return 0;
}