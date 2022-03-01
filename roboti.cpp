#include <fstream>
#include <queue>
using namespace std;
#define DMAX 1001

int n, m, a, b, c, d;
bool map[DMAX][DMAX], vis[DMAX][DMAX];
void Read() {
    ifstream fin ("roboti.in");

    fin >> n >> m;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            fin >> map[i][j];

    fin >> a >> b >> c >> d;

    fin.close();
}

struct qNode {
    int i;
    int j;
    int dist;
};

bool isValid(int i, int j) {
    return i >= 0 and i < n and j >= 0 and j < m;
}

int di[] = {-1, 0, 0, 1};
int dj[] = {0, -1, 1, 0};

int Lee(bool map[][DMAX], int i1, int j1, int i2, int j2) {
    vis[i1][j1] = true;
    queue<qNode> q;
    q.push({i1, j1, 0});

    while (!q.empty()) {
        qNode act = q.front();

        if (act.i == i2 and act.j == j2)
            return act.dist;

        q.pop();

        for (int i = 0; i < 4; ++i) {
            int x = di[i] + act.i;
            int y = dj[i] + act.j;

            if (isValid(x, y) and !map[x][y] and !vis[x][y]) {
                vis[x][y] = true;
                q.push({x, y, act.dist + 1});
            }
        }
    }

    return -1;
}

int main() {
    Read();
    ofstream fout("roboti.out");
    fout << Lee(map, a - 1, b - 1, c - 1, d - 1);
    fout.close();

    return 0;
}