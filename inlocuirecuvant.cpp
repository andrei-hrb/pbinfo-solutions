#include <fstream>
#include <iostream>
#include <string>
#include <limits>
#include <sstream>

using namespace std;

ifstream fin("inlocuirecuvant.in");
ofstream fout("inlocuirecuvant.out");

string string1, string2, mainString;

int main() {
    fin >> string1 >> string2;
    fin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(fin, mainString);

    stringstream stringstream1(mainString);

    string temporaryString;
    while (stringstream1 >> temporaryString) {
        if (temporaryString == string1)
            fout << string2 << ' ';
        else
            fout << temporaryString << ' ';
    }

    return 0;
}