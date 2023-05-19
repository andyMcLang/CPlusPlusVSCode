#include <iostream>
using namespace std;

int main()
{
    int *ip1, *ip2;  // both ip1 and ip2 are pointers to int
    double dp, *dp2; // dp2 is a pointer to double; dp is a double
    int ival = 50;
    int *p = &ival; // p holds the address of ival; p is a pointer to ival

    cout << endl
         << "------------------------------------------" << endl;
    cout << "ip1 is: " << ip1 << " and ip2 is " << ip2 << endl;
    cout << "dp is: " << dp << " and dp2 is " << dp2 << endl;
    cout << endl
         << "------------------------------------------" << endl;
    cout << "Ival = " << ival << endl
         << "p = " << p << endl
         << "*p = " << *p;
    *p = 51;
    cout << endl
         << "------------------------------------------" << endl;
    cout << "New ival = " << ival << endl
         << "New p = " << p << endl
         << "New *p = " << *p;
    ival = 52;
    cout << endl
         << "------------------------------------------" << endl;
    cout << "New ival = " << ival << endl
         << "New p = " << p << endl
         << "New *p = " << *p;
    cout << endl
         << "------------------------------------------" << endl;

    double dval;
    double *pd = &dval; // ok: initializer is the address of a double
    double *pd2 = pd;   // ok: initializer is  a pointer to double
    cout << endl
         << "------------------------------------------" << endl;
    cout << "dval is " << dval << endl
         << "*pd is " << *pd << endl
         << "pd is " << pd << endl
         << "pd2 is " << pd2 << endl
         << "*pd2 is " << *pd2 << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}