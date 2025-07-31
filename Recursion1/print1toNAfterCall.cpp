#include<iostream>
using namespace std;
void nto1(int n){
    if(n==0) return ;//base call
    nto1(n-1);// call
    cout<<n<<endl;// kaam
}
int main(){
    nto1(4);
}