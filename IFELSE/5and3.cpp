#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if((n%5==0)&&(n%3==0)){
        cout<<"It is divisible by 5 and 3 ";
    }
    else {
    cout<<" Not divisible by 5 and 3 ";
    }
    return 0;
}