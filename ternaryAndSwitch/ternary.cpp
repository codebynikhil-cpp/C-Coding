#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the number";
    cin>>x;

    // if(x%2==0) cout<<"even";
    // else       cout<<"odd";
    //  condition ? true : false
    x%2==0 ? cout<<"even" : cout<<"odd" ;

    return 0;
}