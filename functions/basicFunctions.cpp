#include<iostream>
using namespace std;
void starTriangle(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){ 
    int a,b,c;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<"Enter the value of c :";
    cin>>c;
    starTriangle(a);
    starTriangle(b);
    starTriangle(c);
    return 0;
}