/*
29. Write a program to print Fibonacci series using function.
*/
#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, c, i;
    printf("%d %d ", a, b);
    for (i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}

int main() {
    int n = 6;
    fibonacci(n);
    return 0;
}
