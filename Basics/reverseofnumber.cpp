#include<iostream>
using namespace std;

int main(){
    int n;
    int r=0;
    int l=0;
    cout<<"Enter the number : ";
    cin>>n;
    // int a = n;
    while (n>0){
        r*=10;
        l=n%10;
        r+=l;
        n/=10;
    }
    // if(a==0) cout<<0;
    cout<<"reverse of the digit : "<<r;
    return 0;
}