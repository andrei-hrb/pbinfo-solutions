#include <iostream>
#include <cmath>

using namespace std;

int n,c=1;
long long S;

int main()
{
    cin>>n;

    for (int i=1; i<=n; i++)
    {
        for (int j=c; j<=1000000; j++)
        {
            c++;
            if (sqrt(j)==int(sqrt(j))) {S+=j; break;}
        }
    }

    cout<<"Rezultatul este "<<S;

    return 0;
}