#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array numbers :";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the number :";
    cin>>x;
    int count = 0;
    for(int i=0;i<=n-1;i++){
        if(x<arr[i]) {     
            count+=1;
    }
}
cout<<"Number of terms greater than given number : "<<count;
return 0;
}