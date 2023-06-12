// The Vector Type in C++

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    /*
    // Luo tyhjä vektori kokonaislukuja varten
    std::vector<int> numerot;

    // Lisää elementtejä vektoriin
    numerot.push_back(10);
    numerot.push_back(20);
    numerot.push_back(30);

    // Käytä vektorin elementtejä
    std::cout << "Ensimmäinen elementti: " << numerot[0] << std::endl;
    std::cout << "Toinen elementti: " << numerot[1] << std::endl;

    // Käy läpi vektori
    std::cout << "Kaikki elementit:";
    for (const auto& num : numerot) {
        std::cout << " " << num;
    }
    std::cout << std::endl;

    // Hae vektorin koko
    std::cout << "Vektorin koko: " << numerot.size() << std::endl;

    // Poista viimeinen elementti
    numerot.pop_back();

    // Tarkista, onko vektori tyhjä
    if (numerot.empty()) {
        std::cout << "Vektori on tyhjä" << std::endl;
    } else {
        std::cout << "Vektori ei ole tyhjä" << std::endl;
    }
*/

    vector<int> vektori;
    vektori = {1, 3, 5, 7, 9};
    for (int i : vektori)
        cout << i << endl;

    cout << endl;

    vektori.pop_back();
    for (int i : vektori)
        cout << i << endl;

    return 0;
}
