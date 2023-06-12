// Processing Some Characters in a String

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main()
{
    const string hexdigits = "0123456789ABCDEF"; // possible hex digits
    cout << "Enter a string of 0-15 numbers, separated by spaces. When finished, press ENTER: " << endl;
    string result;        // will hold the resulting hexadecimal string
    string::size_type ip; // hold numbers from the input
    while (cin >> ip)
    if (ip < hexdigits.size()) // ignore invalid input
    result += hexdigits[ip];    // fetch the indicated hex digit
    cout << "Your hex number is: " << result << endl;

    return 0;
}