#include <iostream>
using namespace std;

int main()
{
    constexpr int koko = 10;
    int taulukko[koko] = {1, 2, 3, 4, 5, 6};
    int *osoitin = taulukko;

    // Tulostaa: 3
    cout << *(osoitin + 6) << endl;

    //////////////////////////////////////

    const int *p = nullptr; // p is a pointer to a const int

    constexpr int *q = nullptr; // q is a const pointer to int

    ////////////////////////////////////

    constexpr int arvo = 5;
    constexpr int *const osoitin1 = &arvo; // Vakio-osoitin ei-const-tyyppiin

    const int toinenArvo = 10;
    constexpr const int *osoitin2 = &toinenArvo; // Vakio-osoitin const-tyyppiin

    int muuttuja = 7;
    constexpr int *osoitin3 = &muuttuja; // Vakio-osoitin ei-const-tyyppiin

    const int *const osoitin4 = &toinenArvo; // Vakio-osoitin const-tyyppiin

    return 0;
}
