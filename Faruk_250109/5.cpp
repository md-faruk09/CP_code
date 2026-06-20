#include <iostream>
using namespace std;

class B; // forward declaration

class A {
    int x;
public:
    A(int a) : x(a) {}
    friend int compare(A, B);
};

class B {
    int y;
public:
    B(int b) : y(b) {}
    friend int compare(A, B);
};

int compare(A a, B b) {
    return (a.x > b.y) ? a.x : b.y;
}

int main() {
    A a1(50);
    B b1(80);
    cout << "Greater Value = " << compare(a1, b1) << endl;
    return 0;
}