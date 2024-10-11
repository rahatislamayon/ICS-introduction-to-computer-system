
#include <stdio.h>

int main() {
    float a, b;
    int Choice;

    printf("Enter two real numbers : ");
    scanf("%f %f", &a, &b);

    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division (quotient)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &Choice);

    if (Choice == 1) {
        printf("%f + %f = %f\n", a, b, a + b);
    } else if (Choice == 2) {
        printf("%f - %f = %f\n", a, b, a - b);
    } else if (Choice == 3) {
        printf("%f * %f = %f\n", a, b, a * b);
    } else if (Choice == 4) {
        if (b != 0) {
            printf("%f / %f = %f\n", a, b, a / b);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Invalid choice. Please enter a valid option (1-4).\n");
    }

    return 0;
}
