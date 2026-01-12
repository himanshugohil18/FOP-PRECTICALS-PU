/*
40. Program for one class to another class type conversion.
*/
#include <iostream>
using namespace std;

class A {
public:
    int x;
    A(int a) { x = a; }
};

class B {
public:
    int y;
    B(A a) { y = a.x; }
};

int main() {
    A a(10);
    B b = a;
    cout << b.y;
    return 0;
}
