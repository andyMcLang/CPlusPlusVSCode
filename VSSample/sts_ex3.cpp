// Processing Some Characters in a String

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main()
{
    string readMe("Terve siellä toisessa päässä juu!");
    decltype(readMe.size()) i;

    for (i = 0; i != readMe.size() && !isspace(readMe[i]); i++)
    {
        readMe[i] = toupper(readMe[i]);
    }

    cout << readMe << endl;

    return 0;
}