#include <fstream>
#include <limits.h>

using namespace std;

ifstream cin("sir13.in");
ofstream cout("sir13.out");

bool okay = true;
long long actual_number, last_even = -1, last_odd = -1;

int main() {
    while(cin >> actual_number) {
        if ((actual_number ^ 1) != actual_number + 1) {
            if (last_odd == -1) {
                last_odd = actual_number;
            } else if (actual_number > last_odd) {
                okay = false;
                break;
            } else {
                last_odd = actual_number;
            }
        } else {
            if (last_even == -1) {
                last_even = actual_number;
            } else if (actual_number < last_even) {
                okay = false;
                break;
            } else {
                last_even = actual_number;
            }
        }
    }

    cout << (okay ? "DA" : "NU");

    return 0;
}
