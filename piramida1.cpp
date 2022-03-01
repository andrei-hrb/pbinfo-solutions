#include <iostream>
using namespace std;
int n;
char c;
int main()
{

    cin >> n;
    cin >> c;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout << c;
        }
    cout << '\n';
    }
return 0;
}
