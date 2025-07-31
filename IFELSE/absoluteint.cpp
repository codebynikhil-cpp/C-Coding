#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    // if(n>0){
    //     cout<<"absolute value of the integer : "<<n;
    // }
    // else { //n<=0
    // cout<<"ansolute value of the integer : "<<-n;
    // }
     if(n<0){
        n=-n;
     }
     cout<<n;
    return 0;
}