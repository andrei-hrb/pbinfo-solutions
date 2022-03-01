// the shittest code that i ever wrote fss

#include <map>
#include <vector>
#include <algorithm>
#include <cstring>
#include <fstream>

using namespace std;

ifstream cin("tabel1.in");
ofstream cout("tabel1.out");

map<char, int> letters = {
    make_pair('A',65),
    make_pair('B',66),
    make_pair('C',67),
    make_pair('D',68),
    make_pair('E',69),
    make_pair('F',70),
    make_pair('G',71),
    make_pair('H',72),
    make_pair('I',73),
    make_pair('J',74),
    make_pair('K',75),
    make_pair('L',76),
    make_pair('M',77),
    make_pair('N',78),
    make_pair('O',79),
    make_pair('P',80),
    make_pair('Q',81),
    make_pair('R',82),
    make_pair('S',83),
    make_pair('T',84),
    make_pair('U',85),
    make_pair('V',86),
    make_pair('W',87),
    make_pair('X',88),
    make_pair('Y',89),
    make_pair('Z',90),
    make_pair('a',97),
    make_pair('b',98),
    make_pair('c',99),
    make_pair('d',100),
    make_pair('e',101),
    make_pair('f',102),
    make_pair('g',103),
    make_pair('h',104),
    make_pair('i',105),
    make_pair('j',106),
    make_pair('k',107),
    make_pair('l',108),
    make_pair('m',109),
    make_pair('n',110),
    make_pair('o',111),
    make_pair('p',112),
    make_pair('q',113),
    make_pair('r',114),
    make_pair('s',115),
    make_pair('t',116),
    make_pair('u',117),
    make_pair('v',118),
    make_pair('w',119),
    make_pair('x',120),
    make_pair('y',121),
    make_pair('z',122),
};

int sum;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        char ch;
        int nr;

        cin >> ch >> nr;

        letters[ch] = nr;
    }

    cin.get();
    string str;
    getline(cin, str);

    int k = 0;
    bool numbers[10];
    memset(numbers, 0, sizeof(numbers));
    for(auto &i : str) {
        if ((i >= 'a' and i <= 'z') or (i >= 'A' and i <= 'Z')) {
            sum += letters[i];
        } else if (i >= '0' and i <= '9') {
            if (! numbers[i - '0']) {
                numbers[i - '0'] = true;
                ++k;
            }
        }
    }

    int counter = 0;
    int number[1000];
    int half = k / 2 == 1 ? k / 2 + 1 : k / 2;

    for (int i = 9; i >= 0; --i) {
        if (counter < half) {
            if (numbers[i]) {
                number[counter++] = i;
            }
        } else {
            break;
        }
    }

    counter = k / 2 == 1 ? counter - 1 : counter;
    for (int i = 0; i <= 9; ++i) {
        if (counter < k) {
            if (numbers[i]) {
                number[counter++] = i;
            }
        } else {
            break;
        }
    }

    cout << sum << '\n';

    for(int i = 0; i < counter; ++i) {
        cout << number[i];
    }

    cin.close();
    cout.close();

    return 0;
}
