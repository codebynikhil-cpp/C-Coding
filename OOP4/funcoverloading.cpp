#include<iostream>
#include<vector>
#include<string>
using namespace std;

class complexnumber {
    public:
        int imaginary;
        int real;

        // Add return type
        // complexnumber add(complexnumber &c1) {
        //     complexnumber c3;
        //     c3.real = c1.real + this->real;
        //     c3.imaginary = c1.imaginary + this->imaginary;
        //     return c3;
        // }

        complexnumber operator +(complexnumber &c1){
            complexnumber c3;
            c3.real = c1.real + this->real;
            c3.imaginary = c1.imaginary + this->imaginary;
            return c3;
        }
        complexnumber operator -(complexnumber &c1){
            complexnumber c3;
            c3.real = c1.real - this->real;
            c3.imaginary = c1.imaginary - this->imaginary;
            return c3;
        }
};
int main() {
    complexnumber a1, a2;
    a1.imaginary = 10;
    a1.real = 5;
    a2.imaginary = 2;
    a2.real = 3;

    // Call add without pointer (pass by reference)
    // complexnumber a3 = a1.add(a2);
    complexnumber a3;
    complexnumber a4;
    complexnumber a5;
    a3 = a1 + a2;
    cout << "real: " << a3.real << " " << "imaginary: " << a3.imaginary << endl;
    a4 = a1 + a2 + a3;
    cout << "real: " << a4.real << " " << "imaginary: " << a4.imaginary << endl;
    a4 = a1 - a2 ;
    cout << "real: " << a4.real << " " << "imaginary: " << a4.imaginary << endl;
    return 0;
}
