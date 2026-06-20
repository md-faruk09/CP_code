#include <iostream>
using namespace std;

class Student {
    int marks1, marks2;
public:
    Student(int a, int b) : marks1(a), marks2(b) {}
    friend class Exam;
};

class Exam {
public:
    void totalMarks(Student s) {
        cout << "Total Marks = " << s.marks1 + s.marks2 << endl;
    }
};

int main() {
    Student s1(80, 90);
    Exam e1;
    e1.totalMarks(s1);
    return 0;
}