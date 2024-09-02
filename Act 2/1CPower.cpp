#include <iostream>
using namespace std;

class Power {
private:
    int base;
    int exponent;
    
public:
    Power(int b, int e) : base(b), exponent(e) {}
    
    int calculate() {
        if (exponent == 0)
            return 1;
        else {
            exponent--; // Reduce the exponent
            return base * calculate();
        }
    }
};

int main() {
    int base, exponent;
    
    cout << "Enter the base: ";
    cin >> base;
    
    cout << "Enter the exponent: ";
    cin >> exponent;
    
    Power p(base, exponent);
    
    int result = p.calculate();
    cout << base << " raised to the power of " << exponent << " is " << result << endl;
    
    return 0;
}
