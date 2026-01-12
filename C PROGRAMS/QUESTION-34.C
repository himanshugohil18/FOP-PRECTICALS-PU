/*
34. Write a program to find mean value using friend function.
*/
#include <iostream>
using namespace std;

class Mean {
    int a, b;
public:
    Mean(int x, int y) { a = x; b = y; }
    friend float findMean(Mean m);
};

float findMean(Mean m) {
    return (m.a + m.b) / 2.0;
}

int main() {
    Mean m(10, 20);
    cout << findMean(m);
    return 0;
}
