/*
39. Program for basic to class and class to basic conversion.
*/
#include <iostream>
using namespace std;

class Test {
    int x;
public:
    Test(int a) { x = a; }
    operator int() { return x; }
};

int main() {
    Test t(10);
    int a = t;
    cout << a;
    return 0;
}
