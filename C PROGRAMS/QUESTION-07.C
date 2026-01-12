/*
Write a Program to make a simple calculator.
*/

#include <stdio.h>

int main() {
    int a, b;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %d", a / b);
            else
                printf("Division by zero is not allowed");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
