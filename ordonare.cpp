#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    int n,v[1001];
    
    cin >> n;
    
    for (int i=1; i<=n; i++)
        cin >> v[i];
    
    sort (v+1, v+n+1);
    
    for (int i=1; i<=n; i++)
        cout << v[i] << " ";
    
    return 0;
}
