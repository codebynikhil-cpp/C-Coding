#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows : ";
    cin>>m;
    cout<<"Enter the number of columns : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //max 
    int max = INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]) max = arr[i][j];
        }
    }
    int smax = INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(smax<arr[i][j] && arr[i][j]!=max)
             smax = arr[i][j];
        }
    }
    cout<<smax;
    return 0;
}