#include<iostream>
using namespace std;

int main(){
    cout<<"Enter 1st number : ";
    int a,b,c ;
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout<<"Enter 3rd number : ";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<" is largest";
    }
    if(b>a && b>c){
        cout<<b<<" is largest";
    }
    if(c>a && c>a){
        cout<<c<<" is largest";
    }
    return 0;
}