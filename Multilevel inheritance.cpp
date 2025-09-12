#include <iostream>
using namespace std;
// Base class
class LivingBeing{
public:
    void breed(){
        cout<<"French Bulldog"<<endl;
    }
};
// Derived from LivingBeing
class Animal:public LivingBeing {
public:
    void eat(){
        cout<<"Animals eat food"<<endl;
    }
};
// Derived from Animal
class Dog:public Animal {
public:
    void colour(){
        cout<<"black"<<endl;
    }
};
int main(){
    Dog myDog;
    myDog.breed();                              // From Dog Breed
    myDog.eat();                                 // From Animal
    cout<<"Dog colour"<<endl;
    myDog.colour();                              // From Dog
    return 0;
}
/*Output:-
French Bulldog
Animals eat food
Dog colour
black
*/
