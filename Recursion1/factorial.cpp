#include<iostream>
using namespace std;
int fact(int n){
    // base case
    if(n==1 || n==0) return 1;
    // kaam and call
    int ans = n*fact(n-1);
    // recursive call
    return ans;
}
int main(){
    cout<<fact(8);
}