#include<iostream>
using namespace std ; 
int gcd(int a, int b){
    int hcf = 1;
    // 24 60
    // i = 24,23,22,21,.....
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){//i is a common factor 
            hcf =i;
            break;
        }
    }
    return hcf;
}
int main (){
    int a,b;
    cout<<"Enter 1st number :";
    cin>>a;
    cout<<"Enter 2nd number :";
    cin>>b;
    cout<<gcd(a,b);

}