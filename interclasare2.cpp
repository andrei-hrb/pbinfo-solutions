#include <fstream>
#include <limits.h>

using namespace std;

ifstream cin("interclasare2.in");
ofstream cout("interclasare2.out");

int n, m, first_index, second_index, solution_index;
int first_array[100001], second_array[100001], solution_array[200002];

int main() {
    cin >> n;
    for (int index = 0; index < n; index++) cin >> first_array[index];
    first_array[n] = INT_MAX;

    cin >> m;
    for (int index = 0; index < m; index++) cin >> second_array[index];
    second_array[m] = INT_MAX;

    while (first_index < n && second_index < m) {
        if (first_array[first_index] == second_array[second_index]) {
            solution_array[solution_index++] = first_array[first_index];
            first_index++;
            second_index++;
        } else if (first_array[first_index] < second_array[second_index]) {
            first_index++;
        } else {
            second_index++;
        }
    }

    for (int index = 0; index < solution_index; index++) {
        if (index !=0 && index % 10 == 0) {
            cout << '\n';
        }
        cout << solution_array[index] << ' ';
    }

    return 0;
}
