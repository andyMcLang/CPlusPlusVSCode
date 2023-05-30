#include <iostream>
using namespace std;
using Osoitin = int *;            // Tyyppialias "Osoitin" osoittimelle int
using Viittaus = int &;           // Tyyppialias "Viittaus" viittaukselle int
using VakioOsoitin = const int *; // Tyyppialias "VakioOsoitin" osoittimelle const int

int main()
{

    Osoitin p = nullptr;
    int luku = 5;
    Viittaus r = luku;
    VakioOsoitin q = &luku;

    return 0;
}
