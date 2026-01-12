/*
Write a C program to sort a list in alphabetic order using pointers.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *p;
    int i, j;
    char temp;

    printf("Enter a string: ");
    gets(str);

    p = str;

    for (i = 0; *(p + i) != '\0'; i++) {
        for (j = i + 1; *(p + j) != '\0'; j++) {
            if (*(p + i) > *(p + j)) {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    printf("String in Alphabetic Order: %s", str);

    return 0;
}
