#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the cost price : ";
    int cp;
    cin>>cp; 

    cout<<"Enter the selling price : ";
    int sp;
    cin>>sp;

    if(sp>cp){
        cout<<"Profit = "<<sp-cp;
    }
    if(cp>sp){
        cout<<"loss = "<<cp-sp;
    } 

    if(cp==sp){
        cout<<" No Profit no loss";
    }
    return 0;
}