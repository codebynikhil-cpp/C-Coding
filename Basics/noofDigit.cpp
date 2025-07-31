#include<iostream>
using namespace std;

int main(){
    int n;
    int r=0;
    cout<<"Enter the number : ";
    cin>>n;
    int a = n;
//    for(int i=1;i<=n;i++){
//     n = n/10;
//     r++;
//    }
    
    while (n>0){
        n/=10;
        r++;
    }
    if(a==0) cout<<1;
    else
    cout<<"number of terms : "<<r;
    return 0;
}