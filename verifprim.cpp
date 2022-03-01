#include <iostream>

using namespace std;

int n;

bool prim(int a, int l) // l=5!
{
    if (a <= 1)
        return false;
    else
    {
        if (a <= 3) return true;
        else
        {
            if (a % 2 == 0 || a % 3 == 0)
                return false;
            else
            {
                while (l * l <= a)
                {
                    if (a % l == 0 || a % (l+2) == 0)
                        return false;
                    l+=4;
                }
            }
        }
    }
    return true;
}


int main()

{
    ios::sync_with_stdio(false);

    cin >> n;

    if (prim (n,5) == true) cout << "DA";
    else cout << "NU";

    return 0;
}
