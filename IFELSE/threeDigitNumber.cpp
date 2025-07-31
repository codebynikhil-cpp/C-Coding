#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number : ";
    int n;
    cin>>n;
    if((n>=100)&&(n<1000)){
          cout<<"Three Digit number ";
    }
    else {
        cout<<"Not a three digit number";
    }
    return 0;
}