#include<iostream>
using namespace std;
int main(){
    int x = 4;
    int* p = &x;
    int y = 9;
    int* p2 = &y;


    cout<<&x<<endl;
    cout<<p;
}