#include <iostream>
using namespace std;

int main()
{
    // ChatGPT:n tulkinta:

    typedef int *IntOsoitin;                  // Tyyppialias "IntOsoitin" osoittimelle int
    typedef const double *VakioDoubleOsoitin; // Tyyppialias "VakioDoubleOsoitin" osoittimelle const double

    IntOsoitin osoitin1;
    const int arvo = 5;
    const VakioDoubleOsoitin osoitin2 = &arvo;

    *osoitin1 = 10; // Muuttaa osoittimen osoittaman arvon
                    // *osoitin2 = 3.14; // Virhe: Yritetään muuttaa osoittimen osoittamaa arvoa, joka on const

    // Youtube tutoriaalin tulkinta:

    typedef chat *pstring;
    const pstring cstr = 0;
    const pstring *ps;
    const char *cstr = 0;

    return 0;
}
