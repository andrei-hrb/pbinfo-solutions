#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n != 1) {
        cout << n << ' ';

        if (n % 2) {
            n = n / 2 + 1;
        } else {
            n--;
        }
    }

    cout << n;

    return 0;
}
