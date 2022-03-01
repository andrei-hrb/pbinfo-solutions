#include <iostream>
#include <fstream>
#include <queue>
#include <vector>

using namespace std;

struct point {
    int x;
    int y;
    int val;
    string pos;

    point(const int &i, const int &j, const int &v, const string &str) : x(i), y(j), val(v), pos(str) {}
};

char input;
queue<point> q;
int n, m, finish_x, finish_y;
bool map[1005][1005], visited[1005][1005];
vector<point> dirs = {
        point(-1, 0, 1, "N"),
        point(0, 1, 1, "E"),
        point(0, -1, 1, "V"),
        point(1, 0, 1, "S"),
};

bool is_safe(point p) {
    return p.x >= 0 and p.y >= 0 and p.x < n and p.y < m and ! visited[p.x][p.y] and map[p.x][p.y];
}

int main() {
    ifstream fin("soarece2.in");

    fin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            fin >> input;
            switch (input) {
                case '_' :
                    map[i][j] = true;
                    break;

                case 'S':
                    q.push(point(i, j, 0, ""));
                    map[i][j] = true;
                    visited[i][j] = true;
                    break;

                case 'B':
                    finish_x = i;
                    finish_y = j;
                    map[i][j] = true;
                    break;

                default: break;
            }
        }
    }

    fin.close();

    while (! q.empty()) {
        auto a = q.front();

        if (a.x == finish_x and a.y == finish_y) {
            break;
        }

        q.pop();

        for (auto &dir : dirs) {
            auto new_point = point(a.x + dir.x, a.y + dir.y, a.val + dir.val, a.pos + dir.pos);

            if (is_safe(new_point)) {
                q.push(new_point);
                visited[new_point.x][new_point.y] = true;
            }
        }
    }


    ofstream fout("soarece2.out");

    fout << q.front().val << '\n' << q.front().pos;

    fout.close();

    return 0;
}