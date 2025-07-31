#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the sides of the triangle : ";
    cin>>a>>b>>c;
    if(a==b && a==c){
        cout<<"Equilateral Triangle ";
    }

    else if((a!=b && a!=c)){
        cout<<"Scalene Triangle ";
    }
    
    else if((a==b && a!=c) || (b==c && b!=c) ||(c==a && c!=b))
    {
        cout<<"Isescales Triangle ";
    }

    // else{
    //     cout<<"Not a Triangle ";
    // }
    return 0;
}