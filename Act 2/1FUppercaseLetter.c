#include <stdio.h>
#include <ctype.h>

// Define a struct to hold the character
struct Character {
    char value;
};

void check_uppercase(struct Character c) {
    if (isupper(c.value))
        printf("Yes");
    else
        printf("No");
}

int main() {
    struct Character ch;
    printf("Enter a character: ");
    scanf(" %c", &ch.value);
    check_uppercase(ch);
    return 0;
}
