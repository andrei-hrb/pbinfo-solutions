#include <iostream>
using namespace std;
int main()
{
    int a,c1,c2,c3,aux;

    cin >> a;

    if (a%10>=a/10%10) { c1=a%10; c2=a/10%10;}
    else {c2=a%10; c1=a/10%10;}

    if (a/100>=c2) { aux=c2; c2=a/100; c3=aux;}
    else c3=a/100;

    aux=0;
    if (c2>=c1) {aux=c1; c1=c2; c2=aux;}

    cout << c3 << " " << c2 << " " << c1;

    return 0;
}
