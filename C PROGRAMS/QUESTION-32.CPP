/*
32. WAP to illustrate call by value and call by reference.
*/
#include <iostream>
using namespace std;

void value(int x) {
    x = x + 10;
}

void reference(int &y) {
    y = y + 10;
}

int main() {
    int a = 10, b = 10;

    value(a);
    reference(b);

    cout << a << " " << b;
    return 0;
}
