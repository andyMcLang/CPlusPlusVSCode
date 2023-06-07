// Operations on Strings (Part 2)

#include <iostream>
#include <string>
using namespace std;

int main() {
    string readMe;
    while (getline(cin,readMe)) {
        auto len = readMe.size();
        cout << "Length of this string = " << len << endl;
    }

    return 0;
}