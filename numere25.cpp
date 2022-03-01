#include <fstream>

using namespace std;

ifstream cin("numere25.in");
ofstream cout("numere25.out");

bool ok = false;
int n, first = 1, before_last, last;

int main() {
    cin >> n;

    while (cin >> last) {
        if (first != last or first != before_last) {
            for (int i = first; i < last; i++) {
                cout << i << ' ';
                ok = true;
            }

            before_last = last;
            first = last + 1;
        }
    }

    for (int i = first; i <= n; i++) {
        cout << i << ' ';
        ok = true;
    }

    if (ok == false) {
        cout << "Nu exista";
    }

    return 0;
}
