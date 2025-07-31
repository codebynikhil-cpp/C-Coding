#include<iostream>
#include<vector>
using namespace std;
void removenum(int arr[] ,int n,int idx,vector<int>& v,int rn){
    if(idx==n){
        return;
    }
    if(arr[idx]!=rn){
        v.push_back(arr[idx]);
    }
    removenum(arr,n,idx+1,v,rn);
}   
int main(){ 
    int arr[] = {1,2,3,1,1,4,1,7};
    vector<int> v;
    int n = sizeof(arr)/sizeof(arr[0]);
    int rn = 1;
    removenum(arr,n,0,v,rn);
    for (int ele:v){
        cout<<ele<<endl;
    }
}