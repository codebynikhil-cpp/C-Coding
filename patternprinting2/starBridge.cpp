#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of lines :  ";
    cin>>n;
    int nsp =1;
    int m =n-1;//new line
    for(int l=1;l<=2*n-1;l++){
    cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int k=1;k<=nsp;k++) 
        cout<<" ";
        nsp+=2;
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}