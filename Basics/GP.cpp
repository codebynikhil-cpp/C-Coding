#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter th number ";
    cin>>n;
    // 1 2 4 8 16 .... n terms 
    int a = 1;
    for (int i =1 ;i<=n;i++){
        cout<<a<<endl;
        a=2*a;
    }
    return 0;
}