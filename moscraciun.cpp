#include <fstream>
#include <queue>
#include <vector>
#include <cstring>
#define DMAX 101

using namespace std;

struct point
{
    int x;
    int y;

    point(const int &xx, const int &yy) : x(xx), y(yy) {}
};

int n, m;
point mosCraciun = {0, 0};
vector<point> spiridusi;
bool mat[DMAX][DMAX];
void Read()
{
    ifstream fin("moscraciun.in");
    int p;
    fin >> n >> m;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            fin >> p;
            if (p == 0 or p == 1)
                mat[i][j] = p;
            else
            {
                mat[i][j] = 1;
                if (p == 3)
                {
                    spiridusi.reserve(1);
                    spiridusi.emplace_back(point(i, j));
                }
                else
                {
                    mosCraciun.x = i;
                    mosCraciun.y = j;
                }
            }
        }

    fin.close();
}

bool isValid(int r, int c)
{
    return r >= 0 and r < n and c >= 0 and c < m;
}

int di[] = {-1, 0, 0, 1};
int dj[] = {0, -1, 1, 0};
bool lee (point a, point b)
{
    bool vis[n][m];
    memset(vis, false, sizeof vis);
    vis[a.x][a.y] = true;

    queue<point> q;
    q.push(a);

    while (!q.empty())
    {
        point cur = q.front();
        if (cur.x == b.x and cur.y == b.y)
            return true;

        q.pop();

        for (int i = 0; i < 4; ++i) {
            int r = cur.x + di[i];
            int c = cur.y + dj[i];

            if (isValid(r, c) and mat[r][c] and !vis[r][c])
            {
                vis[r][c] = true;
                q.push(point(r, c));
            }
        }
    }

    return false;
}

void Solution()
{
    int s = 0;
    for (auto &i : spiridusi)
    if(lee(mosCraciun, i))
        ++s;
    ofstream fout("moscraciun.out");
    fout << s;
    fout.close();
}

int main()
{
    Read();
    Solution();

    return 0;
}

