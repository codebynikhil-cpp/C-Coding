#include<iostream>
using namespace std;

int main(){
cout<<"Enter the three Triangle sides : ";
int a,b,c;
cin>>a>>b>>c;
if((a+b>c) && (b+c>a) && (c+a>b)){
    cout<<"it  is triangle sides ";
}
else {
    cout<<" it is not a triangle sides ";
}

    return 0;
}