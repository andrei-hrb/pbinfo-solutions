#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

ifstream fin("serbare.in");
ofstream fout("serbare.out");

struct uniforms {
    int numberOfStudents;
    int type;

    uniforms(const int x, const int y) : numberOfStudents(x), type(y) {}
};

bool sortUniforms(uniforms a, uniforms b) {
    return a.numberOfStudents > b.numberOfStudents;
}

int n, c;
vector<uniforms> v;

int liniarSeach(int n) {
    for (size_t i = 0; i < v.size(); ++i)
        if (n == v[i].type)
            return int(i);
    return -1;
}

int main() {
    fin >> n >> c;

    for (int i = 0; i < n; ++i) {
        int temp1, temp2;
        fin >> temp1 >> temp2;

        int pos = liniarSeach(temp2);
        if (pos == -1) v.reserve(1), v.emplace_back(uniforms(temp1, temp2));
        else v[pos].numberOfStudents += temp1;
    }

    sort(v.begin(), v.end(), sortUniforms);

    for (auto &i : v)
        fout << i.type << ' ';

    return 0;
}