#include<fstream>
#include<stack>
#include<string>
using namespace std;

ifstream fin("paranteze2.in");
ofstream fout("paranteze2.out");

stack<bool> stack1;
string string1;
size_t maxi;


int main() {
    getline(fin, string1);

    for (auto &i : string1) {
        if (i == '(') {
            stack1.push(1);
            if (stack1.size() > maxi)
                maxi = stack1.size();
        } else
            stack1.pop();
    }

    fout << maxi;


    return 0;
}