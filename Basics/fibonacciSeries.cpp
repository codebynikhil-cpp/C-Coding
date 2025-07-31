#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of fibonacci term :";
    cin>>n;
    int a=1, b=1, sum=0;
    for(int i=1;i<=n-2;i++){
    sum = a + b; // 
    a = b;
    b = sum;
    }
    cout<<"The "<<n<<" fibonacci number is :"<<b;
    return 0;
}