#include <iostream>
using namespace std;

class Array {
    int *arr;
    int size;
public:
    Array(int s) : size(s) {
        arr = new int[size];
        for(int i = 0; i < size; i++) arr[i] = i + 1;
    }
    // Deep copy constructor
    Array(const Array &a) {
        size = a.size;
        arr = new int[size];
        for(int i = 0; i < size; i++) arr[i] = a.arr[i];
        cout << "Deep Copy Constructor Called" << endl;
    }
    void display() {
        for(int i = 0; i < size; i++) cout << arr[i] << " ";
        cout << endl;
    }
    ~Array() { delete[] arr; }
};

int main() {
    Array a1(5);
    Array a2 = a1;
    a2.display();
    return 0;
}