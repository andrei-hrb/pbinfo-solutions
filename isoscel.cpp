#include <iostream>
using namespace std;
double a,b,c;
int main()
{
    cin>>a>>b>>c;
    if((a<b+c)&&(b<a+c)&&(c<a+b))
    {
        if ((a==b)|| (b==c) || (a==c))
        {if (a==b && b==c) cout<< "Nu formeaza triunghi isoscel";
        else cout << "Formeaza triunghi isoscel";}
        else cout<<"Nu formeaza triunghi isoscel";
    }
    else cout<<"Nu formeaza triunghi";
    return 0;
}