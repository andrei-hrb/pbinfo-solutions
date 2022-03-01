#include <iostream>

using namespace std;

// returneaza cel mai mare divizor comun al numerelor a si b.
// doua numere sunt prime intre ele daca au cel mai mare
// divizor comun egal cu 1.
int cmmdc(int a, int b)
{
    while (a != b)
        if (a > b)
            a -= b;
        else
            b -= a;
    return a;
}

int main(void)
{
    int count = 0, n, a[1000];
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= n/2; i++){
        if (a[i] != 0 && a[n-i+1] != 0) // elementele egal departate de mijlocul vectorului sa nu fie egale cu 0
            if (cmmdc(a[i], a[n-i+1]) == 1) // sunt prime intre ele
                count++;
    }

    cout << count;
    return 0;
}