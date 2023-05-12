#include <iostream>
using namespace std;

int main()
{
    cout << "Coffee or Tea?" << endl
         << "Coffee = 1," << endl
         << "Tea = 2: " << endl;
    int choise;
    cin >> choise;

    if (choise == 1)
    {
        cout << "You take a coffee";
    }
    else if (choise == 2)
    {
        cout << "You take a tea";
    }
    else
    {
        cout << "Something get wrong!";
    }

    return 0;
}