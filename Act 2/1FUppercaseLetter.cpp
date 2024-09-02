#include <iostream>
#include <cctype>
using namespace std;

class Character {
public:
    char value;

    void check_uppercase() {
        if (isupper(value))
            cout << "Yes";
        else
            cout << "No";
    }
};

int main() {
    Character ch;

    cout << "Enter a character: ";
    cin >> ch.value;

    ch.check_uppercase();

    return 0;
}
