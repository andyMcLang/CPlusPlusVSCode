#include <iostream>

using namespace std;

int main()
{
    cout << "Give some number: ";
    int sum = 0, count = 1, val = 0;
    cin >> val;

    while (count <= val)
    {
        sum += count;
        count++;
    }
    cout << "sum of 1 to " << val << " = " << sum << endl;
    return 0;
}