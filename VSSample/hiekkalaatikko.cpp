#include <iostream>

using namespace std;

void tulostaKerroin(const int *const osoitin)
{
    std::cout << "Kerroin: " << *osoitin << std::endl;
}

int main()
{
    int luku = 5; // Kokonaisluku

    const int *const osoitin = &luku; // Vakio-osoitin, joka osoittaa luku-muuttujaan

    tulostaKerroin(osoitin);

    return 0;
}
