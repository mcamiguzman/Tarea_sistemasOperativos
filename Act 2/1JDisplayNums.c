#include <stdio.h>

struct Number {
    int value;
};

void display_formats(struct Number n) {
    printf("Decimal: %d, Octal: %o, Hexadecimal: %X\n", n.value, n.value, n.value);
}

int main() {
    struct Number num;
    
    for (num.value = 1; num.value <= 10; num.value++) {
        display_formats(num);
    }
    
    return 0;
}
