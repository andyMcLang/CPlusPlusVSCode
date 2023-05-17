#include <iostream>

using namespace std;

int escSeq()
{
    cout << "This will be followed by a newline \n and after this I want a horizontal tab \t. Now here I want a backslash \\ and I want to write this word in \"double quotes\" and this in \'single quotes\'. Let us see if all this works correctly \? Okay\by ";
}

int main()
{
    int choise;
    cout << "choise 1 or 2: ";
    cin >> choise;

    if (choise == 1)
    {
        escSeq();
    }
    else
    {
        cout << "have nice day!" << endl;
    }

    return 0;
}