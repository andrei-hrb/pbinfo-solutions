#include <fstream>

using namespace std;

ifstream cin("paritatesiruri.in");
ofstream cout("paritatesiruri.out");

int main() {
    int number;
    cin >> number;
    cin.get();

    for (int i = 0; i < number; ++i) {
        string temp;
        getline(cin, temp);

        int size = int(temp.size());
        for (int j = 1; j < size; j += 2) {
            cout << temp[j];
        }

        cout << ' ';

        for (int j = 0; j < size; j += 2) {
            cout << temp[j];
        }

        cout << '\n';
    }

    return 0;
}
