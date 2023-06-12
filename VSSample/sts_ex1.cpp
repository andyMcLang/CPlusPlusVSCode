// Processing Some Characters in a String

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main()
{
    string readMe("hello there");
    if (!readMe.empty())
    readMe[6] = toupper(readMe[6]);
        cout << readMe << endl;

    return 0;
}