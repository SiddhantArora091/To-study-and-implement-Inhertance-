
#include <iostream>
using namespace std;
// Base class
class Gadget {
public:
    void powerOn(){
        cout<<"Powering on the device\n";
    }
};
// Derived class 1
class Smartphone:public Gadget{
public:
    void callFeature(){
        cout<<"Smartphone can make calls\n";
    }
};
// Derived class 2
class Laptop:public Gadget{
public:
    void codeFeature(){
        cout<<"Laptop can run C++ programs\n";
    }
};
// Derived class 3
class Smartwatch : public Gadget {
public:
    void healthFeature() {
        cout<<"Smartwatch tracks heart rate\n";
    }
};
int main() {
    Smartphone phone;
    Laptop computer;
    Smartwatch watch;

    cout << "Smartphone:\n";
    phone.powerOn();
    phone.callFeature();

    cout << "\nLaptop:\n";
    computer.powerOn();
    computer.codeFeature();

    cout << "\nmartwatch:\n";
    watch.powerOn();
    watch.healthFeature();
    return 0;
}
/*Output:-
Smartphone:
Powering on the device
Smartphone can make calls

Laptop:
Powering on the device
Laptop can run C++ programs

martwatch:
Powering on the device
Smartwatch tracks heart rate
*/
