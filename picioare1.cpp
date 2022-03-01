#include <iostream>

using namespace std;
int G,O,C,P;
int main()
{
    cin >> C >> P;
    O=(P-2*C)/2;
    G=C-O;
    cout << G << " "<< O << '\n';
    return 0;
}
