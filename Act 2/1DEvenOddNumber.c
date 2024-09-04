#include <stdio.h>

struct Number {
    int value;
};

void check_even_odd(struct Number n) {
    if (n.value % 2 == 0)
        printf("Is even.\n");
    else
        printf("Is odd.\n");
}

int main() {
    struct Number num;
    printf("Enter a number: ");
    scanf("%d", &num.value);
    check_even_odd(num);
    return 0;
}
