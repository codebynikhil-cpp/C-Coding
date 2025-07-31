#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the three marks : ";
    cin>>a>>b>>c;
    if(a<b && a<c)
    cout<<"'A'has the least marks ";
    else{
        if(b<c && b<a)
         cout<<"'B'has the least marks ";
         else {
            if(c<a && c<b)
                 cout<<"C'has the least marks ";
         }
    }
    return 0;
}