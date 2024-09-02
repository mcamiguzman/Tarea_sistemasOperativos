#include <stdio.h>

struct Fibonacci {
    int terms;
};

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void print_fibonacci(struct Fibonacci f) {
    for (int i = 0; i < f.terms; i++) {
        printf("%d ", fibonacci(i));
    }
}

int main() {
    struct Fibonacci fib;
    printf("Enter the number of terms: ");
    scanf("%d", &fib.terms);
    print_fibonacci(fib);
    return 0;
}
