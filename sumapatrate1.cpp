#include <iostream>
#include <cmath>

using namespace std;

int n,c=1;
long long S;

int main()
{
    cin>>n;

    for (int i=c; i<=n; i++)
    {
            c++;
            if (sqrt(i)==int(sqrt(i))) {S+=i;}
    }

    cout<<"Rezultatul este "<<S;

    return 0;
}