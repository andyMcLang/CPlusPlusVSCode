#include <iostream>

using namespace std;

int recursiveSum(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return n + recursiveSum(n - 1);
    }
}

int main()
{
    int value = 5;
    int num = recursiveSum(value);

    cout << "value " << value << " is recursive sum: " << num << endl;

    return 0;
}
