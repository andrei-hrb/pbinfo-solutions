#include <iostream>
#include <queue>
#include <fstream>
#include <vector>

using namespace std;

struct point {
    int x;
    int y;

    point(const int &i, const int &j) : x(i), y(j) {}
};

queue<point> q;
bool map[180][180], visited[180][180];
int n, m, start_x, start_y, finish_x, finish_y, temp_1, temp_2, values[180][180];
vector<point> dirs = {
        point(0, 1),
        point(0, -1),
        point(1, 0),
        point(-1, 0),
};

bool is_safe(point pnt) {
    return pnt.x >= 0 and pnt.y >= 0 and pnt.x < n and pnt.y < n and !visited[pnt.x][pnt.y] and !map[pnt.x][pnt.y];
}


int main() {
    ifstream fin("alee.in");

    fin >> n >> m;

    for (int i = 0; i < m; ++i) {
        fin >> temp_1 >> temp_2;
        map[temp_1 - 1][temp_2 - 1] = true;
    }



    fin >> start_x >> start_y >> finish_x >> finish_y;

    fin.close();

    start_x -= 1;
    start_y -= 1;
    finish_x -= 1;
    finish_y -= 1;

    q.push(point(start_x, start_y));
    visited[start_x][start_y] = true;
    values[start_x][start_y] = 1;

    while (! q.empty()) {
        auto curr = q.front();

        if (curr.x == finish_x and curr.y == finish_y) {
            break;
        }

        q.pop();

        for (auto &dir : dirs) {
            auto new_pnc = point(curr.x + dir.x, curr.y + dir.y);

            if (is_safe(new_pnc)) {
                values[new_pnc.x][new_pnc.y] = values[curr.x][curr.y] + 1;
                visited[new_pnc.x][new_pnc.y] = true;

                q.push(new_pnc);
            }
        }
    }

    ofstream fout("alee.out");

    fout << values[finish_x][finish_y];

    fout.close();

    return 0;
}