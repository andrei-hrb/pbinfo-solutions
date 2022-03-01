#include <fstream>
using namespace std;

ifstream cin("interclasare1.in");
ofstream cout("interclasare1.out");

int n, m, maximum_value, read_value;
bool solution_array[1000001];

int main() {
    cin >> n;
    for (int index = 0; index < n; index++) {
        cin >> read_value;
        solution_array[read_value] = true;
    }
    maximum_value = read_value;

    cin >> m;
    for (int index = 0; index < m; index++) {
        cin >> read_value;
        solution_array[read_value] = true;
    }
    maximum_value = max(maximum_value, read_value);

    cin.close();

    int displayed = 0;
    for (int index = 0; index <= maximum_value; index++) {
        if (solution_array[index]) {
            cout << index << ' ';
            if (++displayed % 10 == 0) {
                cout << '\n';
            }
        }
    }

    cout.close();

    return 0;
}
