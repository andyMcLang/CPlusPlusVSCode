#include <iostream>

using namespace std;

int main()
{
    int sum = 0, val;

    cout << "Give some value: ";
    cin >> val;

    for (int i = 1; i <= val; i++)
    {
        sum += i;
    }
    cout << "Sum of 1 of " << val << " is " << sum;

    return 0;
}