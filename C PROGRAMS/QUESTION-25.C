/*
25. Write a C program to input all sides of a triangle and check whether triangle is valid or not.
*/
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
        printf("Triangle is valid");
    else
        printf("Triangle is not valid");

    return 0;
}
