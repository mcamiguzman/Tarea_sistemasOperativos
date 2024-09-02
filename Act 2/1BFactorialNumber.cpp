#include <iostream>
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
    std::cout << "Enter a number: ";
    std::cin >> number;
    FactorialNumber calculator;
    result = calculator.factorial(number);
    std::cout << "Factorial of " << number << " is " << result << std::endl;
    return 0;
}
