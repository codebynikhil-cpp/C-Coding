#include<iostream>
using namespace std;
int a = 9; // global variable 
void f(){
    cout<<a;
}

int main(){
    // cout<<a<<endl;
    // int a=2;  // local
    // cout<<a<<endl;
    // cout<<a+7<<endl;
    
    a=7;
    // cout<<a;
    f();
    return 0;
}