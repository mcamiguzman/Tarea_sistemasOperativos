#include <stdio.h>

struct Power {
    int base;
    int exponent;
};

int calculate_power(struct Power p) {
    if (p.exponent == 0)
        return 1;
    else {
        p.exponent--; 
        return p.base * calculate_power(p);
    }
}

int main() {
    struct Power p;
    
    printf("Enter the base: ");
    scanf("%d", &p.base);
    
    printf("Enter the exponent: ");
    scanf("%d", &p.exponent);
    
    int result = calculate_power(p);
    printf("%d raised to the power of %d is %d\n", p.base, p.exponent + 1, result);
    
    return 0;
}
