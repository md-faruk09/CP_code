
#include <iostream>
using namespace std;

class Box {
public:
    Box() {}
    Box(const Box &b) {
        cout << "Copy Constructor Triggered" << endl;
    }
};

void test(Box b) {
    cout << "Function Called" << endl;
}

int main() {
    Box b1;
    test(b1);   // copy constructor called here
    return 0;
}