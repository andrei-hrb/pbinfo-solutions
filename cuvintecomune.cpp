#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>

using namespace std;

string string1, string2;
vector <string> vector1, vector2, solution;

int binarySearch(vector <string> v, string str) {
    int first = 0, last = v.size() - 1, middle, position = -1;
    bool found = 0;

    while (!found and first <= last) {
        middle = (first + last) / 2;
        if (v[middle] == str) {
            found = 1;
            position = middle;
        }
        else {
            if (v[middle] > str)
                last = middle - 1;
            else
                first = middle + 1;
        }
    }

    return position;
}

int main() {
    getline(cin, string1);
    transform(string1.begin(), string1.end(), string1.begin(), ::tolower);
    stringstream sin1(string1);
    string temp1;
    while(sin1 >> temp1) {
        vector1.reserve(1);
        vector1.emplace_back(temp1);
    }
    sort(vector1.begin(), vector1.end());

    getline(cin, string2);
    transform(string2.begin(), string2.end(), string2.begin(), ::tolower);
    stringstream sin2(string2);
    string temp2;
    while(sin2 >> temp2) {
        vector2.reserve(1);
        vector2.emplace_back(temp2);
    }
    sort(vector2.begin(), vector2.end());

    if (vector1.size() < vector2.size())
        for (size_t i = 0; i < vector1.size(); ++i) {
            int result = binarySearch(vector2, vector1[i]);
            if (result != -1) {
                solution.reserve(1);
                solution.emplace_back(vector2[result]);
            }
        }
    else
        for (size_t i = 0; i < vector2.size(); ++i) {
            int result = binarySearch(vector1, vector2[i]);
            if (result != -1) {
                solution.reserve(1);
                solution.emplace_back(vector1[result]);
            }
        }

    cout << solution[0] << '\n';
    for (size_t i = 1; i < solution.size(); ++i)
        if (solution[i] != solution [i - 1])
            cout << solution[i] << '\n';

    return 0;
}


