#include<iostream>
using namespace std;
int pow(int x, int n){
    if(n==0) return 1;
    if(n==1) return x;
    if(n%2==0) return pow(x,n/2)*pow(x,n/2);
    if(n%2!=0) return pow(x,n/2)*pow(x,n/2)*x;
}
    int main(){
    cout<<pow(3,5);
}