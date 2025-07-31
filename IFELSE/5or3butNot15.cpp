#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    // if(((n%5==0)||(n%3==0)) && (n%15!=0)){
    //     cout<<"It is divisible by 5 or 3 but not 15";
    // }
    // else {
    // cout<<" Not matching the condition  ";
    // }

    if(n%5==0 || n%3==0){
        if(n%15!=0){
        cout<<"It is divisible by 5 or 3 but not 15";
        }
        else {
            cout<<" Not matching the condition  ";
        }}
        else {
            cout<<" Not matching the condition  ";
        }
    
    return 0;
}