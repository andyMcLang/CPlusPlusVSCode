#include <iostream>
using namespace std;

const int max_files = 20; // max_files is a constant expression

const int limit = max_files + 1; // limit is a constant expression
int staff_size = 27;             // staff_size is not a constant expression
// const int sz = get_size();       // sz is not a constant expression
constexpr int mf = 20;          // 20 is a constant expression
constexpr int limitce = mf + 1; // mf + 1 is a constant expression
constexpr int sz = size();      // ok only if size is a constexpr function

int main()
{
    cout << endl
         << "max_files is : " << max_files << endl;
    cout << "limit is : " << limit << endl;
    cout << "staff_size is : " << staff_size << endl;
    // cout << "sz is : " << sz endl
    cout << "mf is : " << mf << endl;
    cout << "limitce is : " << limitce << endl;
    cout << "sz is : " << sz << endl
         << endl;

    return 0;
}