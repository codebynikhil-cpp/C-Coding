#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of lines :  ";
    cin>>n;
    int nsp =1;
    int m = n-1;//new line
    int a;
    for(int l=1;l<=2*n-1;l++){
    cout<<l;
    }
    cout<<endl;
    for(int i=1;i<=m;i++){
        int a=1;
        for(int j=1;j<=m+1-i;j++){
            cout<<a;
            a++;
        }
        for(int k=1;k<=nsp;k++) {
        cout<<" ";
        a++;
        }
        nsp+=2;
        for( int j=1;j<=n-i;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}