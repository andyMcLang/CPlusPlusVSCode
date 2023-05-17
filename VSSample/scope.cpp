#include <iostream>

using namespace std;

int something()
{
    int sum = 1;

    return sum;
}

int main()
{
    // scope
    int sum = 0;
    for (int val = 1; val <= 10; ++val)
    {
        sum = sum + val;
    }
    cout << "sum of main is: " << sum << endl;
    cout << "sum of something is: " << something() << endl;

    return 0;
}