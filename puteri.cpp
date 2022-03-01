#include <iostream>
using namespace std;

int n, a, b;

int main() {
    ios::sync_with_stdio(false);
    
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> a >> b;
        
        int p = 1;
        while(p * 2 <= max(a, b))
            p *= 2;
        if(p >= min(a, b)) 
            cout << p << '\n';
        else 
            cout << 0 << '\n';
    }

    return 0;
}

