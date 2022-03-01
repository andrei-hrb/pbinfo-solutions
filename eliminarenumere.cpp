#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string mainString;

int main() {
    getline(cin, mainString);

    string temporaryString;
    bool ok = false;
    for (size_t i = 0; i <= mainString.size(); ++i)
        if ((mainString[i] >= '0' and mainString[i] <= '9') or mainString[i] == '.') {
            temporaryString.reserve(1);
            temporaryString.push_back(mainString[i]);

            ok = true;
        } else {
            if (ok) {
                stringstream sin(temporaryString);

                double n;
                sin >> n;

                if (n != (int) n)
                    mainString.erase(mainString.begin() + i - temporaryString.size(), mainString.begin() + i) ;

                ok = false;

                temporaryString.erase(temporaryString.begin(), temporaryString.end());
            }
        }

    cout << mainString;
}