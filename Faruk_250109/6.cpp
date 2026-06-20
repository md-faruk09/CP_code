#include <iostream>
using namespace std;

class Logger {
public:
    Logger() { cout << "Object Created" << endl; }
    ~Logger() { cout << "Destructor Called" << endl; }
};

int main() {
    Logger a;
    {
        Logger b;
        Logger c;
    }
    Logger d;
    return 0;
}