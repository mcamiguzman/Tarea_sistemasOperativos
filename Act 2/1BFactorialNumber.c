#include <stdio.h>
typedef struct {
    int number;
    int factorial;
} FactorialResult;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    FactorialResult result;
    printf("Enter a number: ");
    scanf("%d", &result.number);
    result.factorial = factorial(result.number);
    printf("Factorial of %d is %d\n", result.number, result.factorial);
    return 0;
}
