#include <iostream>
using namespace std;

class Tracker {
    static int count;
public:
    Tracker() {}
    Tracker(const Tracker &t) { count++; }
    static void showCount() {
        cout << "Copy Constructor Called = " << count << " times" << endl;
    }
};

int Tracker::count = 0;

int main() {
    Tracker t1;
    Tracker t2 = t1;
    Tracker t3 = t2;
    Tracker t4 = t3;
    Tracker::showCount();
    return 0;
}