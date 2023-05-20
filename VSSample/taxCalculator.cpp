#include <iostream>
using namespace std;

// Pass by reference
void applyTax(int &money)
{
    float tax = 0.10;
    money = money - money * tax;
}

int main()
{
    int income;
    cin >> income;

    applyTax(income);

    cout << income << endl;

    return 0;
}