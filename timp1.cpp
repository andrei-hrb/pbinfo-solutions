#include <iostream>
using namespace std;
int h1,m1,x,y;
int main()
{
    cin>>h1>>m1>>x>>y;
    cout << (h1 + (m1 + y) / 60 + x) % 24 << ' ' << (m1 + y) % 60 << '\n';
}

