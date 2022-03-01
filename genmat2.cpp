#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for(int j = n; j >= 1; j--) {
            if (i == j) {
                cout << 0 << ' ';
            } else {
                cout << j << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}
