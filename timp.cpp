
#include <iostream>
using namespace std;
int main(){
    int h1,h2,m1,m2,x;
    cin>>h1>>m1>>x;
    m1+=x;
    h1+=m1/60;
    m1%=60;
    h1%=24;
    h2=h1;
    m2=m1;
    cout<<h2<<" "<<m2;
    return 0;
}
