#include <iostream>

using namespace std;

int n,S,i;

int main()
{
    cin >> n;

    for (i=1; i<=n; i++)
    {
        if (i%2!=0) S+=(i*(i+1));
        else S-=(i*(i+1));
    }

    cout << "Rezultatul este " << S;

    return 0;
}
