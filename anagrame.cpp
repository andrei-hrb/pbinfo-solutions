#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string string1, string2;

int main(){
    cin >> string1 >> string2;

    sort(string1.begin(), string1.end());
    sort(string2.begin(), string2.end());

    if (string2 == string1)
        cout << 1;
    else
        cout << 0;

    return 0;
}