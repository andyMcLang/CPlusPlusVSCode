// Processing Every Character in a String

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main()
{
    string readMe = "Hello There!";

    for (auto ch : readMe) {
        cout << ch << endl;
    }

    return 0;
}