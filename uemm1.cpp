//https://youtu.be/6366dxFf-Os

#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

struct vect{
    int val = -1;
    int ord;

    vect (const int &v, const int &o) : val(v), ord(o) {}
};

stack<vect> s;
int v[100001];

int main() {
    int n, a;
    cin >> n;

    memset(v, -1, n * sizeof(v[0]));

    for (int i = 0; i < n; ++i) {
        cin >> a;
        if (s.empty())
            s.push(vect(a, i));
        else {
            bool ok = false;
            while (!s.empty()) {
                if (a > s.top().val) {
                    v[s.top().ord] = a;
                    s.pop();
                } else {
                    ok = true;
                    s.push(vect(a, i));
                    break;
                }
            }
            if (!ok)
                s.push(vect(a, i));
        }
    }

    for (int i = 0; i < n; ++i)
        cout << v[i] << ' ';

    return 0;
}