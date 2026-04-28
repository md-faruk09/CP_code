#include<bits/stdc++.h>
using namespace std;

class Student{
private:
    char *name;
    int *mark;

public:
    Student(const char *ch,int n){
        name = new char[strlen(ch)+1];
        strcpy(name,ch);

        mark = new int; 
        *mark = n;
    }

    
    Student(const Student &t){
        cout<<"Shallow Copy Constructor Called\n";
        name = t.name;  
        mark = t.mark;  
    }

    void show(){
        cout<<"Name: "<<name<<" and Mark: "<<*mark<<endl; // ✅ *mark
    }

    void set(const char *ch,int n){
        strcpy(name,ch);
        *mark = n;
    }

    ~Student(){
        delete[] name;
        delete mark;
    }
};

int main(){

    Student ob1("Faruk",67);

    
    Student ob2 = ob1;

    cout<<"Before Change:\n";

    cout<<"Obj1: ";
    ob1.show();

    cout<<"Obj2: ";
    ob2.show();

    ob1.set("Rakib",76);

    cout<<"\nAfter Change:\n";

    cout<<"Obj1: ";
    ob1.show();

    cout<<"Obj2: ";
    ob2.show();
}