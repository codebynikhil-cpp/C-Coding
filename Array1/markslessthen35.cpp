#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of students : ";
    cin>>n;
    int marks[n]; // 0 to n-1
    cout<<"Enter the marks : ";
    // input
    for (int i=0;i<=n-1;i++){
        cin>>marks[i];
    }
    for(int i=0;i<=n-1;i++){
        if(marks[i]<35 ) cout<<i<<" ";
    }
    return 0;
}