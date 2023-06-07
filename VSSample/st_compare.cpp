// Operations on Strings (Part 2)

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string suurin;
    string s1 = "Grape";
    string s2 = "Aaa";
    string s3 = "Gym";

    if ((s1 > s2) && (s1 > s3))
    {
        suurin = s1;
    }
    else if ((s2 > s3) && (s2 > s1))
    {
        suurin = s2;
    }
    else
    {
        suurin = s3;
    }

    cout << "suurin sana on: " << suurin << endl;

    return 0;
}