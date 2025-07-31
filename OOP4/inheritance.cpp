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
    void showCompany(){
        cout<<companyname<<endl;
    }
    vehicle(){
        cout<<"Vehicle ka constructor call hua !!\n";
    }
};
class Car : public vehicle{ //car inherits vehicle,Derived Class
public:
    int steeringSize;
};

class Bike : public vehicle{ //Derived Class, Child Class
public:
    int handleSize;
    Bike(){
        cout<<"Car ka constructor call hua !!\n";
    }
};

class  A{
private:  // can't be accesses from outside, can't be inherited
    int a_ka_private;
protected: // can't be accessed, can be inherited
    int a_ka_protected;
public: // can be accessed, can be inherited
    int a_ka_public;
    A(){
        cout<<"A ka constructor call hua!\n";
    }
};
class B{ 
public:
    int b_ka_public;
    // void show(){
    //     a_ka_protected;
    // }
    B(){
        cout<<"B ka constructor call hua!\n";
    }
};

class C : public B,public A{ //b_ka_public as public, a_ka_proteced, a_ka_public as protected
public:
    int c_ka_public;

    // void show(){
    //     a_ka_public;
    // }
    C(){
        cout<<"C ka constructor call hua!\n";
    }
};
int main(){
    // A a;
    // B b;
    C c;
    // b.a_ka_public = 5;
    // Bike honda;
    // honda.handleSize = 5;
    // honda.tyreSize = 10;
    // honda.engineSize = 500;
    // honda.companyname = "HONDA";
    // cout<<honda.handleSize<<endl;
    // honda.showCompany();
}   