#include <algorithm>
#include <iostream>

using namespace std;

int v[6],s;

int main()
{
    ios::sync_with_stdio(false);
    
    for (int i=1; i<=5; i++)
        cin >> v[i];
    
    s+=*max_element(v+1, v+6);
    *max_element(v+1, v+6)=0;
    s+=*max_element(v+1, v+6);
    *max_element(v+1, v+6)=0;
    s+=*max_element(v+1, v+6);
    
    cout << s;
    
    return 0;
}