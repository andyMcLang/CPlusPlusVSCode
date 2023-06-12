// Processing Every Character in a String

/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string readMe("Hello There! How are you??");
    int count = 0;
    for (auto ch : readMe)
    {
        if (ispunct(ch))
        {
            ++count;
        }
    }
    cout << "Merkkijonoja lauseessa " << readMe <<  " on: " << count << " kappaletta.";

    return 0;
}
*/

#include <iostream>
#include <string>
#include <cctype>

int countPunctuation(const std::string& str) {
    int count = 0;
    for (char ch : str) {
        if (std::ispunct(ch)) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string str = "Hello, World! How are you?";
    int punctuationCount = countPunctuation(str);
    std::cout << "Merkkijonossa on " << punctuationCount << " välimerkkiä." << std::endl;
    return 0;
}
