#include<iostream>
using namespace std;
int main(){
    char str[10] ={'a','b','c','d','e','f'};
    for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<" ";
    }
    cout<<"\n"<<str<<endl;
    // int arr[]={1,2,3,4,5};
    // char str[] ={"abcd"};
    for(int i=0;i<5;i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    cout<<(int)str[5];
    // return 0;
}