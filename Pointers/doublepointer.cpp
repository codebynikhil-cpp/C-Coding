#include<iostream>
using namespace std;

int main(){
    int x=5;
    int* ptr = &x;
    int** p = &ptr;
    cout<<x<<endl; //0x61ff08
    cout<<*ptr<<endl;   //0x61ff04
    cout<<**p<<endl;
    return 0;
}