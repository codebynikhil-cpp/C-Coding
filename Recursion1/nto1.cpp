#include<iostream>
using namespace std;
void nto1(int n){
    if(n==0) return ;//base call
    cout<<n<<endl;// kaam
    nto1(n-1);// call
}
int main(){
    nto1(4);
}