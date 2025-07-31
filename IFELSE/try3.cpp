#include<iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter the radius : ";
    cin>>r;
    int area ;
    area = 3.14*r*r;
    cout<<"The area is : "<<area<<endl;
    int ci;
    ci= 2*3.14*r;
    cout<<"The circumference is : "<<ci<<endl;
    cout<<area<<">"<<ci<<endl;
    cout<<"area > circumference ";
    return 0;
}