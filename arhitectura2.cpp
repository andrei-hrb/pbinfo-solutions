#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <streambuf>
#include <sstream>

std::ifstream fin("arhitectura2.in");
std::ofstream fout("arhitectura2.out");
std::string str((std::istreambuf_iterator<char>(fin)), std::istreambuf_iterator<char>());

int n, temp;
std::vector<int> v;
std::vector<bool> w;

int main() {
    std::istringstream iss(str);

    iss >> n;

    for (int i = 0; i < n and iss >> temp; ++i) v.reserve(1), v.emplace_back(temp);

    std::sort(v.begin(), v.end(), std::greater<int>());
    v.reserve(2), v.insert(v.begin(), 0), v.emplace_back(0);

    for (int i = 1; i <= n; ++i) w.reserve(1), w.push_back((v[i] == (double)(v[i - 1] + v[i + 1]) / 2));

    for (int i = 1; i <= n; ++i) fout << v[i] << ' '; fout << '\n';
    for (int i = 0; i < n; ++i) fout << w[i] << ' ';

    fin.close();
    fout.close();

    return 0;
}