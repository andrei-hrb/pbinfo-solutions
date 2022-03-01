//begin-------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;

ifstream fin("rime.in");
ofstream fout("rime.out");

//structs-----------------------------------------------------------------------
struct custom {
    string word;
    string rime;
    size_t position;
    bool used;

    custom (const string xw, const string xr, const size_t xp, const bool xu) 
            : word(xw), rime(xr), position(xp), used(xu) {}
};

//functions---------------------------------------------------------------------

bool vowel (char ch) {
    return ch == 'a' or ch  ==  'e' or ch == 'i' or ch == 'o' or ch == 'u' 
           or ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U';
}

bool customCompare (custom a, custom b) {
    return a.word < b.word;
}

string findTheRime(string str) {
    reverse(str.begin(), str.end());

    size_t i = 1;
    while (!vowel(str[i]))
        ++i;

    string string1 = str.substr(0, ++i);
    reverse(string1.begin(), string1.end());

    return string1;
}

//varibles----------------------------------------------------------------------

vector <custom> words;
string content((istreambuf_iterator<char>(fin)), (istreambuf_iterator<char>()));

//main--------------------------------------------------------------------------

int main() {
    content.erase(remove_if(content.begin(), content.end(), [](char c) 
            {return !isalpha(c) and c != '\n' and c != ' '; }), content.end());
    istringstream iss(content);
    string temporary;
    while (iss >> temporary) {
        words.reserve(1);
        words.emplace_back(custom(temporary, findTheRime(temporary), 0, false));
    }
    sort(words.begin(), words.end(), customCompare);

    //--------------------------------------------------------------------------

    size_t place = 0;
    for (size_t i = 0; i < words.size(); ++i)
        if (!words[i].used) {
            words[i].used = true;
            words[i].position = place;
            for (size_t j = i + 1; j < words.size(); ++j)
                if (words[i].rime == words[j].rime) {
                    words[j].used = true;
                    words[j].position = place;
                }
            ++place;
        }

    //--------------------------------------------------------------------------

    fout << place << '\n';
    for (size_t pos = 0; pos < place; ++pos) {
        for (auto &wrd : words)
            if (wrd.position == pos)
                fout << wrd.word << ' ';
        fout << '\n';
    }
     
    //--------------------------------------------------------------------------

    fin.close();
    fout.close();
    return 0;
}