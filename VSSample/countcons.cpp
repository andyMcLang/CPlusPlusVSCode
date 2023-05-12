#include <iostream>
using namespace std;

int main()
{
    // currVal is the number we´re counting; we´ll read new values into val
    int currVal = 0, val = 0;

    // read first number and ensure that we have data to process
    if (cin >> currVal)
    {
        // store the count for the current value we´re processing
        int cnt = 1;

        // read the remaining numbers
        while (cin >> val)
        {

            // if the values are the same
            if (val == currVal)

                // add 1 to cns
                ++cnt;

            // otherwise, print the count for the previous value
            else
            {
                cout << currVal << " occurs "
                     << cnt << " times" << endl;

                // remember the new value
                currVal = val;

                // reset the count
                cnt = 1;
            }
        }
        cout << currVal << " occurs " << cnt << " times " << endl;
    }

    return 0;
}