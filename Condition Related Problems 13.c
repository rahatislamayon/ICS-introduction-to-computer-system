
#include <stdio.h>

int main() {
    double a, b;
    int Choice, Case;
    double result;

    printf("Enter two real numbers : ");
    scanf("%lf %lf", &a, &b);

    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &Choice);

    switch (Choice) {
        case 1:
            result = a + b;
            break;
        case 2:
            result = a - b;
            break;
        case 3:
            result = a * b;
            break;
        case 4:
            printf("Choose another operation:\n");
            printf("1. Quotient\n");
            printf("2. Remainder\n");
            printf("Enter your choice (1-2): ");
            scanf("%d", &Case);
            if (Case == 1) {
                if (b != 0) {
                    result = a / b;
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                    return 1;
                }
            } else if (Case == 2) {
                result = (int)a % (int)b;
            } else {
                printf("Invalid choice. Please enter 1 or 2.\n");
                return 1;
            }
            break;
        default:
            printf("Invalid choice. Please enter a valid option (1-4).\n");
            return 1;
    }

    printf("Result: %.2lf\n", result);

    return 0;
}
