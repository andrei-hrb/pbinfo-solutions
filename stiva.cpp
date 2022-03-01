#include <iostream>
#include <string>
#include <stack>
using namespace std;

int operatii;
char temp[30];
stack <int> stiva;

int main() {
    ios::sync_with_stdio(false);

    cin >> operatii;

    for (int numarDeOperatii = 0; numarDeOperatii < operatii; ++numarDeOperatii) {
        cin.get();
        cin.get(temp,30);
        if (temp[0] == 't' && stiva.empty() == false)
            cout << stiva.top() << '\n';
        else {
            if (temp[1] == 'o') {
                if (stiva.empty() == false)
                    stiva.pop();
            } else {
                int pozitie = 5;
                bool negative = false;

                if (temp[pozitie] == '-') {
                    negative = true;
                    ++pozitie;
                }

                int nr = 0;
                while ('0' <= temp[pozitie] && temp[pozitie] <= '9') {
                    nr = nr * 10 + (temp[pozitie] - '0');
                    ++pozitie;
                }

                if (negative == true)
                    nr *= -1;

                stiva.push(nr);
            }
        }
    }

    return 0;
}