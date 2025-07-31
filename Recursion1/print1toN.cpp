#include<iostream>
using namespace std;
void nto1(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    nto1(i+1,n);
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    nto1(1,n);
}