#include <iostream>
using namespace std;

class Data {
    int value;

public:
    Data(int v) {
        value = v;
    }

    // Copy constructor
    Data(const Data &d) {
        value = d.value;
        cout << "Copy Constructor Called" << endl;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Data d1(10);
    Data d2 = d1;

    d2.display();

    return 0;
}