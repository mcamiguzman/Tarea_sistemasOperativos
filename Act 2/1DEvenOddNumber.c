#include <stdio.h>

struct Number {
    int value;
};

void check_even_odd(struct Number n) {
    if (n.value % 2 == 0)
        printf("%d is even.\n", n.value);
    else
        printf("%d is odd.\n", n.value);
}

int main() {
    struct Number num;
    printf("Enter a number: ");
    scanf("%d", &num.value);
    check_even_odd(num);
    return 0;
}
