/*
35. Write a program to implement Copy Constructor.
*/
#include <iostream>
using namespace std;

class Sample {
public:
    int x;
    Sample(int a) { x = a; }
    Sample(Sample &s) { x = s.x; }
};

int main() {
    Sample s1(10);
    Sample s2 = s1;
    cout << s2.x;
    return 0;
}
