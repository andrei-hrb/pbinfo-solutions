#include <iostream>
using namespace std;
int a,b;
int main()
{
    cin >> a>>b;
     if (a<0 && b<0) cout<< "da";
     if (a>=0 && b>=0) cout<< "da";
     if (a<0 && b>=0) cout<< "nu";
     if (a>=0 && b<0) cout << "nu";

return 0;

}
