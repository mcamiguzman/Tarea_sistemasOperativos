#include <iostream>
using namespace std;

class Number {
public:
    int value;

    // Method to check if the number is even or odd
    void check_even_odd() {
        if (value % 2 == 0)
            cout << value << " is even." << endl;
        else
            cout << value << " is odd." << endl;
    }
};

int main() {
    Number num;

    cout << "Enter a number: ";
    cin >> num.value;

    num.check_even_odd();

    return 0;
}
