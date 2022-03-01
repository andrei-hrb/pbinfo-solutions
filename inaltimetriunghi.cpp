#include <iostream>

using namespace std;

int main()
{
    int c1, c2, i;
    cin >> c1 >> c2 >> i;

    double h = (double)(c1 * c2) / i;
    h *= 100;

    int partea_intreaga = int(h) / 100;
    int partea_fractionala = int(h) % 100;

    cout << partea_intreaga << '.' << partea_fractionala;

    return 0;
}