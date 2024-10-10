#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {

        if ((num & (num - 1)) == 0) {
            printf("%d is a positive power of 2.\n", num);
        } else {
            printf("%d is a positive number, but not a power of 2.\n", num);
        }
    } else if (num == 0) {
        printf("Zero is not a valid input.\n");
    } else {
        printf("Negative input is not valid.\n");
    }

    return 0;
}

