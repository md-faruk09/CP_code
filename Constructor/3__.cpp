#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
        char *name;
        int mark;
    public:
        Student(const char *ch,int n){
            name =new char[strlen(ch)+1];
            strcpy(name,ch);
            mark=n;
        }
        Student(const Student &t){
            name =new char[strlen(t.name)+1];
            strcpy(name,t.name);
            mark=t.mark;
        }
        void show(){
            cout<<"Name: "<<name<<" and  Mark: "<<mark<<endl;
        }
        void set(const char *ch,int n){
            delete[] name;
            name =new char[strlen(ch)+1];
            strcpy(name,ch);
            mark=n;
        }
};

int main(){
    Student ob1("Faruk",67);
    Student ob2=ob1;

    cout<<"Before change: \n";
    cout<<"Obj1: ";
    ob1.show();

    cout<<"Obj2: ";
    ob2.show();

    ob1.set("Rakib",76);

    cout<<"\nAfter changing: \n";
    cout<<"Obj1: ";
    ob1.show();
    
    cout<<"Obj2: ";
    ob2.show();
}