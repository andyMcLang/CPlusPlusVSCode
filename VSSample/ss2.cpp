// Operations on Strings (Part 1)

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string readMe;
    cout << "Syötä lause: ";
    getline(cin,readMe);

    cout << "Lauseesi on: " << endl << readMe << endl;

    return 0;
}