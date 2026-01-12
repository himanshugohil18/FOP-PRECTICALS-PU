/*
Write a C program to calculate the average of first n numbers.
*/

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    average = sum / n;

    printf("Average of first %d numbers = %.2f", n, average);

    return 0;
}
