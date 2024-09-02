#include <stdio.h>

struct Numbers {
    int a;
    int b;
    int c;
};

void find_greatest(struct Numbers nums) {
    int greatest = nums.a;
    if (nums.b > greatest)
        greatest = nums.b;
    if (nums.c > greatest)
        greatest = nums.c;
    printf("The greatest of %d, %d, and %d is %d\n", nums.a, nums.b, nums.c, greatest);
}

int main() {
    struct Numbers nums;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &nums.a, &nums.b, &nums.c);
    find_greatest(nums);
    return 0;
}
