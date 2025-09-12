#include <iostream>
using namespace std;
// Base class 1
class Vehicle {
public:
    string brand = "Ford";
    void showColor() {
        cout << "Color: Red\n";
    }
};
// Base class 2
class Engine {
public:
    int horsepower = 450;
    void showType() {
        cout << "Engine Type: V8\n";
    }
};
// Derived class with multiple inheritance
class Car : public Vehicle,public Engine {
public:
    string model = "Mustang";
    int year = 2024;
};
int main(){
    Car myCar;
    cout<<"Brand: "<<myCar.brand<<endl;
    cout<<"Model: "<<myCar.model<<endl;
    cout<<"Year: " << myCar.year<<endl;
    cout<<"Horsepower: "<<myCar.horsepower<<endl;
    myCar.showColor();
    myCar.showType();
    return 0;
}
/*Output:-
Brand: Ford
Model: Mustang
Year: 2024
Horsepower: 450
Color: Red
Engine Type: V8
*/
