/*
Write a C program to determine whether the entered character is a vowel or not.
*/

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("The entered character is a Vowel");
    } else {
        printf("The entered character is not a Vowel");
    }

    return 0;
}
