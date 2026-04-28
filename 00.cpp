// write a program that has a class named Arrau_sort, that has  priveat    integer arry & sort_array function that function  sort thea value of the integter array data .moreorder  if has it had also construr to initialixe the array now use asn show both shallow & deep  coyp suing copy constructor


#include <iostream>
using namespace std;

class Array_sort {
private:
    int *arr;
    int size;

public:
    Array_sort(int a[], int s) {
        size = s; 
        arr = new int[size];

        for(int i = 0; i < size; i++) {
            arr[i] = a[i];
        }
    }    Array_sort(const Array_sort &obj) {
        size = obj.size;
        arr = obj.arr;   // same memory
        cout << "Shallow Copy Constructor Called\n";
    }

    // ✅ Deep Copy Function
    Array_sort deepCopy() {
        Array_sort temp(arr, size);
        for(int i = 0; i < size; i++) {
            temp.arr[i] = arr[i];
        }
        return temp;
    }

    // Sorting function
    void sort_array() {
        for(int i = 0; i < size - 1; i++) {
            for(int j = i + 1; j < size; j++) {
                if(arr[i] > arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    // Display
    void show() {
        for(int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor
    ~Array_sort() {
        delete[] arr;
    }
};

int main() {
    int a[5] = {3,6,9,2,8};

    Array_sort a1(a, 5);   // ✅ correct

    // Shallow Copy
    Array_sort a2 = a1;

    // Deep Copy
    Array_sort a3 = a1.deepCopy();

    cout << "\nOriginal array sorted:\n";
    a1.sort_array();
    a1.show();

    cout << "Shallow Copy array:\n";
    a2.show();

    cout << "Deep Copy array:\n";
    a3.show();

    return 0;
}