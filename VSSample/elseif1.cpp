#include <iostream>
using namespace std;

int main()
{
    cout << "Enter some number please: ";
    int number;
    cin >> number;

    if (number > 10)
    {
        cout << "The number is greater than 10.";
    }
    else if (number < 10)
    {
        cout << "The number is less than 10.";
    }
    else
    {
        cout << "The number is equal to 10";
    }

    return 0;
}