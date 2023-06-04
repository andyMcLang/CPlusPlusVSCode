// The string Data Type in C++

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string imempty;
    string helloThere ("How may I help you?");
    string theReply = "Can i get some coffee?";
    imempty = "Sure! How would you like it?";
    string theAnswer = imempty;
    string aLot (10, 's');
    string someSs (aLot);
    string theRequest ("With a lot of sugar. Thanks");

    cout << endl << helloThere << endl << theReply << endl
    << theAnswer << endl << theRequest << someSs << "!!" << endl << endl;

    return 0;
}