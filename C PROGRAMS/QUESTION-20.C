/*
Write a C program to print all ASCII characters with their values.
*/

#include <stdio.h>

int main() {
    int i;

    printf("ASCII Value\tCharacter\n");

    for (i = 0; i <= 127; i++) {
        printf("%d\t\t%c\n", i, i);
    }

    return 0;
}
