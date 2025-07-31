#include<iostream>
#include<vector>
#include<string>
using namespace std;

class complexnumber {
public:
    int imaginary;
    int real;

    // Friend function to overload the + operator
    friend complexnumber operator+(complexnumber &c1, complexnumber &c2);

    // Friend class declaration
    friend class primenumber;
};

// Overload the + operator (friend function)
complexnumber operator+(complexnumber &c1, complexnumber &c2) {
    complexnumber c3;
    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;
    return c3;
}

class A {
private: 
    int a_ka_private = 10; // Private member

public: 
    // Friend function to access private member
    friend void show(A &a);

    void show2() {
        cout << a_ka_private << endl;
    }
};

// Friend function to access class A's private member
void show(A &a) {
    cout << a.a_ka_private << endl;
}

// Correct definition of primenumber class
class primenumber {
public:
    void show(complexnumber &c) {
        // Accessing complexnumber's private members
        cout << "Prime number class accessing complexnumber: real = " << c.real << ", imaginary = " << c.imaginary << endl;
    }
};

int main() {
    const int a = 5;
    cout<<a<<endl;
}
