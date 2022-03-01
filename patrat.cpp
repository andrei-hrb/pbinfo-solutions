#include <iostream>
using namespace std;
int n;
char c,d;
int main()
{

    cin >> n;
    cin >> c >> d;

    for (int i=1; i<=n; i++)
    {
        cout << c;
    }
    cout<<'\n';
    for (int l=2; l<=n-1; l++)
    {
    cout <<c;
        for (int j=2; j<=n-1; j++)
        {
            cout << d;
        }
    cout <<c<< '\n';
    }
    for (int i=1; i<=n; i++)
    {
        cout << c;
    }
return 0;
}
