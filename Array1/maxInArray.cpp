#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    //int max = arr[0];
    int max = INT_MIN;
    for(int i=1;i<=n-1;i++){
        if(max<arr[i]) max = arr[i];
    }
    cout<<max;
    return 0;
}