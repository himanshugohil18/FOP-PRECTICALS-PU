/*
38. Write a program to print output of a function using this pointer.
*/
#include <iostream>
using namespace std;

class Demo {
public:
    int x;
    void set(int x) {
        this->x = x;
    }
};

int main() {
    Demo d;
    d.set(10);
    cout << d.x;
    return 0;
}
