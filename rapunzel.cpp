#include <iostream>
#include <fstream>

using namespace std;

long long N,f,g,M1,M2;

int main ()
{
    ifstream f("rapunzel.in");
    ofstream g("rapunzel.out");

    f>>N;
    f>>M1;
    f>>M2;
    
    if (N%(M1+M2)==0) g<<(N/(M1+M2));
    else g<<(N/(M1+M2)+1);

    f.close();
    g.close();

    return 0;
}