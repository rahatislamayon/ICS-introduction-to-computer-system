#include <stdio.h>

int main() {
    float num1, num2;
    char Operator;

    printf("Enter an expression : ");
    scanf("%f %c %f", &num1, &Operator, &num2);

    if (Operator == '+') {
        printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    }



    else if (Operator == '-') {
        printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    }




    else if (Operator == '*') {
        printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
    }


    else if (Operator == '/') {
        if (num2 != 0) {
            printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
        }



        else {
            printf("Error: Division by zero is not allowed.\n");
        }
    }



    else {
        printf("Invalid operator. Please use +, -, *, or /.\n");
    }

    return 0;
}

