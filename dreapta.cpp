#include <iostream>
using namespace std;
int main()
{
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    if (x1==x2)
    {
        cout<<"verticala";
        return 0;
    }
    if (y1==y2)
    {
        cout<<"orizontala";
        return 0;
    }
    cout << "oblica";
    return 0;
}