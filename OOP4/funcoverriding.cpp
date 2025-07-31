#include<iostream>
#include<vector>
#include<string>
using namespace std;

class vehicle{ //Base Class, Parent Class
public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyname;
    virtual void show(){
        cout<<"Vehicle ka show"<<endl;
    }
};
class Car : public vehicle{ //car inherits vehicle,Derived Class
public:
    int steeringSize;
};
class Bike : public vehicle{ //Derived Class, Child Class
public:
    int handleSize;
    virtual void show(){
        cout<<"Bike ka show"<<endl;
    }
};
class C : public Bike{
public:
    void show(){
        cout<<"C ka show"<<endl;
    }
};
int main(){
    //Compiler POV - vehicle type ka hai
    //compile time binding
    //iski run time binding hogi
    //run Time POV - Bike ka adress hai
    vehicle *a;
    a = new Bike;
    a->show();
    a = new vehicle;
    a->show();

    Bike *b;
    b = new C;
    b-> show();
}   