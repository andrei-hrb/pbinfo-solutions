#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#define Row txt.size()
#define Col 8
using namespace std;

long long decToBin(int a) {
    long long answer = 0;
    int r, i = 1;

    while (a) {
        r = a % 2;
        a /= 2;
        answer += r * i;
        i *= 10;
    }

    return answer;
}

string txt;

int largestKSubmatrix(int a[][Col]) {
    int dp[Row][Col];
    memset(dp, sizeof(dp), 0);

    int result = 0;
    for (int i = 0; i < Row; ++i) {
        for (int j = 0; j < Col; ++j) {
            if (i == 0 || j == 0)
                dp[i][j] = 1;
            else {
                if (a[i][j] == a[i-1][j] && a[i][j] == a[i][j-1] && a[i][j] == a[i-1][j-1])
                    dp[i][j] = min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1]) + 1;
                else
                    dp[i][j] = 1;
            }
            result = max(result, dp[i][j]);
        }
    }

    return result;
}

int v[100][8];

int main() {
    getline(cin, txt);

    for (size_t i = 0; i < txt.size(); ++i) {
        long long bin = decToBin(((int)txt[i]));

        for (int j = 7; j >= 0; --j) {
            v[i][j] = bin % 10;
            bin /= 10;
        }
    }

    cout << largestKSubmatrix(v);

    return 0;
}