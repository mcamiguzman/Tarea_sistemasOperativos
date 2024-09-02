#include <iostream>
#include <cctype>
using namespace std;

class Character {
public:
    char value;
    void check_lowercase() {
        if (islower(value))
            cout << "Yes";
        else
            cout << "No" ;
    }
};

int main() {
    Character ch;
    cout << "Enter a character: ";
    cin >> ch.value;
    ch.check_lowercase();
    return 0;
}
