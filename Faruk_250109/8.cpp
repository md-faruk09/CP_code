#include <iostream>
using namespace std;

class Library {
    int books;
public:
    Library(int b) : books(b) {}
    friend class Librarian;
};

class Librarian {
public:
    void show(Library l) { cout << "Books = " << l.books << endl; }
    void addBooks(Library &l, int x) { l.books += x; }
};

int main() {
    Library l1(100);
    Librarian lb;
    lb.show(l1);
    lb.addBooks(l1, 20);
    lb.show(l1);
    return 0;
}