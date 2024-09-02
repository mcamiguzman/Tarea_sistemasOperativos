#include <stdio.h>
#include <ctype.h>

struct Character {
    char value;
};

void check_lowercase(struct Character c) {
    if (islower(c.value))
        printf("Yes");
    else
        printf("No");
}

int main() {
    struct Character ch;
    
    printf("Enter a character: ");
    scanf(" %c", &ch.value);
    
    check_lowercase(ch);
    
    return 0;
}
