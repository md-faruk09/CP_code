#include<bits/stdc++.h>
using namespace std;

class Test {
private:
    char *str;
public:
    Test(const char *s) {
        str = new char[strlen(s)+1];
        strcpy(str, s);
    }
    Test(const Test &t) {
        str = t.str;   
    }

    void show() {
        cout << str << endl;
    }

    ~Test() {
        delete[] str;
    }
};

int main() {
    Test t1("Hello");
    Test t2 = t1;   // shallow copy

    t1.show();
    t2.show();

    return 0;
}