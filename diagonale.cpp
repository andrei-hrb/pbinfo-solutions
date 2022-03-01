#include <iostream>
#include <math.h>

using namespace std;

int n;
int v[200][200];
int s1, s2;

int main() {
    ios::sync_with_stdio( false );
    
    cin >> n;
    
    for ( int i = 0; i < n; ++i )
        for ( int j = 0; j < n; ++j ) {
            cin >> v[i][j];
            if ( i == j ) s1 += v[i][j];
        }
            
    for ( int i = 0; i < n; ++i )
        for ( int j = n - 1; j > -1 ; --j )
            if (  n - 1 - i == j ) s2 += v[i][j];
    
    
    
    cout << abs ( s1 - s2 );
    
    cout << '\n';
    
    return 0;

}
    

