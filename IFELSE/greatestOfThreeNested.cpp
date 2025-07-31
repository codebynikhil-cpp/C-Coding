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
    if(a>b){
        if(a>c){
            cout<<a<<" is largest ";
        }
        else { // c>a 
            cout<<c<< " is greatest";
        }
        }
        else{//b>a
           if(b>c){
            cout<<b<<" is greatest ";
           }
           else{
        cout<<c<<"is greatest";
           }
        }

    return 0;
}