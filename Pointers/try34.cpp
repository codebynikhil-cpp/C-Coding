// #include<iostream>
// using namespace std;
// int main(){
//     int a=15;
//     int *ptr =&a;
//     int b = (*ptr)++;
//     cout<<a<<" "<<b;
//     return 0;
// }

#include<iostream>
using namespace std;
int sum(int* ptr1,int* ptr2){
    int a,b;
    a = *ptr1;
    b = *ptr2;
    int mult = a*b;
    cout<<"The product of two number is : "<<mult;
}
    int main(){
        int a,b;
        cout<<"Enter the first number : " ;
        cin>>a;
        cout<<"Enter the second number : ";
        cin>>b;
        int* ptr1 = &a;
        int* ptr2 = &b;
        sum(ptr1,ptr2);
    return 0;
}