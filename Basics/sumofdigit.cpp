#include<iostream>
using namespace std;

int main(){
    int n;
    int r=0;
    int b=0;
    cout<<"Enter the number : ";
    cin>>n;
    // int a = n;
    while (n>0){
        r=n%10;
        n/=10;
        b=b+r;
    }
    // if(a==0) cout<<0;
    cout<<"sum of the digit : "<<b;
    return 0;
}