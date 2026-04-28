#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr)

class Array_sort {
private:
    int *arr;
    int n;

public:
    Array_sort(int s) {
        n = s;
        arr = new int[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }
    Array_sort(const Array_sort &a) {
        n = a.n;
        arr = new int[n];
        for(int i = 0; i < n; i++) {
            arr[i] = a.arr[i];
        }
        cout << "Deep Copy Constructor Called\n";
    }
    Array_sort(Array_sort &a,int i) {
        arr = a.arr;
        n = a.n;
        cout << "Shallow Copy Constructor Called\n";
    }
    void sort_array() {
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                if(arr[i] > arr[j]) {
                    int tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
    }
    void show() {
        for(int i = 0; i < n; i++) {
            cout << arr[i] << ' ';
        }
        cout << endl;
    }

};

int32_t main() {
    fastio;

    int n;
    cin >> n;
    Array_sort obj(n);
    cout << "Original Array:\n";
    obj.show();
    Array_sort obj2 = obj;
    Array_sort obj3(obj,1);  
    cout << "\nBefore Sorting Array:\n";
    obj.show();
    cout << "Deep Copy Array:\n";
    obj2.show();
    cout << "Shallow Copy Array:\n";
    obj3.show();
    cout << "\nAfter Sorting Array:\n";
    obj.sort_array();
    obj.show();
    return 0;
}