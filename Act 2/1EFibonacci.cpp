#include <iostream>
using namespace std;

class Fibonacci {
public:
    int terms;
    int fibonacci(int n) {
        if (n <= 1)
            return n;
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

    void print_fibonacci() {
        for (int i = 0; i < terms; i++) {
            cout << fibonacci(i) << " ";
        }
        cout << endl;
    }
};

int main() {
    Fibonacci fib;
    cout << "Enter the number:";
    cin >> fib.terms;
    fib.print_fibonacci();
    return 0;
}
