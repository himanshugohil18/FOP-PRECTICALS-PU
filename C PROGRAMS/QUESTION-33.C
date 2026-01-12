/*
33. Function overloading to calculate area.
*/
#include <iostream>
using namespace std;

float area(float r) { return 3.14 * r * r; }
int area(int l, int b) { return l * b; }
int area(int s) { return s * s; }

int main() {
    cout << area(5) << endl;
    cout << area(4, 6) << endl;
    cout << area(4);
    return 0;
}
