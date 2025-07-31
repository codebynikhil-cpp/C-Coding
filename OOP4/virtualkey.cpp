#include<iostream>
#include<vector>
#include<string>
using namespace std;

class vehicle{ //Base Class, Parent Class
public:
    int tyreSize;
    int engineSize;
    virtual void show(){
        cout<<"Vehicle ka show"<<endl;
    }
};
class Bike : public vehicle{ //Derived Class, Child Class
public:
    int handleSize;
    void show(){
        cout<<"Bike ka show"<<endl;
    }
};
int main(){
    //Compiler POV - vehicle type ka hai
    //compile time binding
    //iski run time binding hogi
    //run Time POV - Bike ka adress hai
    vehicle a;
    Bike b;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
}   