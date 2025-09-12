#include <iostream>
using namespace std;
// Base class
class Person{
public:
    string name="Siddhant Arora";
    void displayAge(){
        cout<<"Age: 20\n";
    }
};
// Derived class
class Student:public Person {
public:
    int rollNo=107;
};
int main(){
    Student s1;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Roll No: "<<s1.rollNo<<endl;
    s1.displayAge();
    return 0;
}
/*Output:-
Name: Siddhant Arora
Roll No: 107
Age: 20

