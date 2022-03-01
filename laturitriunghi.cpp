#include <iostream>

using namespace std;

int n;

int main()
{

    cin >> n;
    int k=n-1;
    int p=n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=p;j++)
            if(i==n)
            {
                if(j%2==1) cout << "*";
                else cout << " ";
            }
            else if(i==1)
            {
                if(j<k+1) cout << " ";
                else cout << "*";
            }
            else
            {
                if(j<k+1) cout << " ";
                if(j==k+1) cout << "*";
                if(j>k+1 and j<p) cout << " ";
                if(j==p) cout << "*";
            }
        k--;
        p++;
        cout << endl;
    }

    return 0;
}