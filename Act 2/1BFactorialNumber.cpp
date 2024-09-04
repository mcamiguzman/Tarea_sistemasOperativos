#include <iostream>
using namespace std;

class FactorialNumber
{
public:
    int factorial(int n) {
        if (n == 0 || n == 1)
            return 1;
        return n * factorial(n - 1);
    }
};


int main() {
    int number;
    int result;
    cout << "Enter a number: ";
    cin >> number;
    FactorialNumber calculator;
    result = calculator.factorial(number);
    cout << "Factorial of " << number << " is " << result << std::endl;
    return 0;
}
