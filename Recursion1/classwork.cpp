#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return ;
    cout<<"good morning"<<endl;
    print(n-1);
    return ;
}
int main(){
    int n;
    cout<<"Enter the no of times :";
    cin>>n;
    print(n);
}