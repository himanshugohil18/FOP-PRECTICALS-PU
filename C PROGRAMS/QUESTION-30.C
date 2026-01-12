/*
30. Write a program to implement arithmetic operations using Inline function.
*/
#include <iostream>
using namespace std;

inline int add(int a, int b) {
    return a + b;
}

int main() {
    cout << add(10, 20);
    return 0;
}
