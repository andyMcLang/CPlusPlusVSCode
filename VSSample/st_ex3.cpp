// Processing Every Character in a String

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main()
{
   string readMe = "suureneeko nää kirjaimet?";

   for (auto &ch : readMe) {
    ch = toupper (ch);
   }

   cout << "lause isoilla kirjaimilla: " << readMe;

    return 0;
}