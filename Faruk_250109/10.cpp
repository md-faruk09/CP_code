#include <iostream>
using namespace std;

class Node {
public:
    Node() {}
    Node(const Node &n) {
        cout << "Copy Constructor Called" << endl;
    }
};

int main() {
    Node a;
    Node b = a;
    Node c = b;
    Node d = c;
    return 0;
}