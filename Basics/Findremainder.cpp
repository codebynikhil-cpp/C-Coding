#include<iostream>
using namespace std;

int main(){
    int a = 16;//a means dividend
    int b = 3;// b is divisor
    // int q = a/b; // q is quotient
    // int r;// r is remainder
   // a = (b*q) + r;
//    int r = a - (b*q);

    //----> ***Modolus ***
    int r = a%b;//remainder when a is divided by b 
   cout<<r;
    return 0;
}