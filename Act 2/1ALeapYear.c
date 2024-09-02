#include <stdio.h>

struct Year {
    int value;
};

int is_leap_year(struct Year y) {
    if ((y.value % 4 == 0 && y.value % 100 != 0) || (y.value % 400 == 0))
        return 1;
    return 0;
}

int main() {
    struct Year year;
    
    printf("Enter a year: ");
    scanf("%d", &year.value);
    
    if (is_leap_year(year))
        printf("Yes");
    else
        printf("No");
}
