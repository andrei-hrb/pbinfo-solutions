//begin-------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

ifstream fin("criptare1.in");
ofstream fout("criptare1.out");

//functions---------------------------------------------------------------------

string ReplaceAll(string str, const string& from, const string& to) {
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
    return str;
}

//varibles----------------------------------------------------------------------

char codif[1000][1000];
vector <size_t> positions;
string crypto, decrypto, message;

//main--------------------------------------------------------------------------

int main() {
    getline(fin, crypto);
    getline(fin, decrypto);
    int p = 0;
    char ch = 'a';
    while (p < decrypto.size()) {
        size_t pos;
        for (; ch <= 'z'; ++ch) {
            pos = decrypto.find_first_of(ch);
            if (pos != string::npos) {
                positions.reserve(1);
                positions.emplace_back(pos);
                ++p;
            }
        }
    }

    p = 0;
    const size_t DMAX = crypto.size() / decrypto.size();
    for (auto &i : positions) {
        for (size_t j = 0; j < DMAX; ++j) {
            codif[j][i] = crypto[p];
            ++p;
        }
    }

    for (size_t i = 0; i < DMAX; ++i)
        for (size_t j = 0; j < positions.size(); ++j)
            message.reserve(1), message.push_back(codif[i][j]);

    message = ReplaceAll(message, "*", " ");
    fout << message;

    fin.close();
    fout.close();
    return 0;
}
