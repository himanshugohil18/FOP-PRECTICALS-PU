/*
31. WAP for function with default arguments.
*/
#include <iostream>
using namespace std;

int sum(int a, int b = 10) {
    return a + b;
}

int main() {
    cout << sum(5);
    return 0;
}
