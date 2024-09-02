#include <iostream>
#include <iomanip>
using namespace std;


class Number {
public:
    int value;
    void display_formats() {
        cout << "Decimal: " << value 
             << ", Octal: " << oct << value 
             << ", Hexadecimal: " << hex << value << endl;
        cout << dec; 
    }
};

int main() {
    Number num;
    for (num.value = 1; num.value <= 10; num.value++) {
        num.display_formats();
    }
    return 0;
}
