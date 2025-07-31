#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter the value of x and y :";
    cin>>x>>y;
    if(x==0 && y!=0)
    cout<<"The point lies on the x axis ";
    else{
        if(x!=0 && y==0)
        cout<<"The point lies on the y axis ";
        else{
            if(x==0 && y==0)
            cout<<"The point lies on the origin ";
            else {
                cout<<"Not matching the condition";
            }
        }
    }
    return 0;
}