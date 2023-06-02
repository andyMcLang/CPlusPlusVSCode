#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

int main()
{
    const int koko = 5;
    string taulukko[koko];
    taulukko[0] = "Toto";
    taulukko[1] = "Keto";
    taulukko[2] = "Nemo";
    taulukko[3] = "Rita";
    taulukko[4] = "Kato";

    for (int i = 0; i < koko; i++)
    {
        if (taulukko[i] == "Nemo")
        {
            cout << taulukko[i] << " löytyi!" << endl;
        }
    }

    return 0;
}