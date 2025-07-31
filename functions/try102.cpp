#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the number :" ;
    cin>>n;
    int d=1;
    for(int i=2;i<=n;i++){
        d=d*i;

    }
            cout<<"the factorial is : "<<d;
    return 0;
}