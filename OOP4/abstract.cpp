#include<iostream>
#include<vector>
#include<string>
using namespace std;

class vehicle {  // Base Class, Parent Class
public:
    int tyreSize;
    int engineSize;

    void showname() {
        // Implementation of showname (if needed)
    }

    virtual void calculateMileage() = 0;  // Pure virtual function
    virtual void refuel() = 0;            // Pure virtual function
};

class Bike : public vehicle {  // Derived Class, Child Class
public:
    int handleSize;
    
    void calculateMileage() override {
        cout << "Bike's mileage calculated" << endl;
    }
    
    void refuel() override {
        cout << "Bike refueled" << endl;
    }
};

int main() {
    Bike b;               // Create an object of the derived class Bike
    b.calculateMileage();  // Call calculateMileage on Bike object
    b.refuel();            // Call refuel on Bike object

    return 0;
}
