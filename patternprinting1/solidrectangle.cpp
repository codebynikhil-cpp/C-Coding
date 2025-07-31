#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the no of rows : ";
    cin>>n;
    cout<<"Enter the no of coloumn : ";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int i=1;i<=m;i++)
        cout<<"*";
        cout<<endl;
    }

    return 0;
}