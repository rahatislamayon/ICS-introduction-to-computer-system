#include <stdio.h>

int main() {
    int X, Y;

    printf("Enter the value of X: ");
    scanf("%d", &X);

    printf("Enter the value of Y: ");
    scanf("%d", &Y);

    if (X > Y) {
        printf("%d is greater than %d\n", X, Y);
    } else if (X < Y) {
        printf("%d is less than %d\n", X, Y);
    } else {
        printf("%d is equal to %d\n", X, Y);
    }

    return 0;
}

