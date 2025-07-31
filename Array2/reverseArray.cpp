#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i,int j,vector<int>& v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}
void reverse(vector<int>& v){
    int i=0;
    int j= v.size()-1;
      while(i<=j){
       int temp = v[i];
       v[i] = v[j];
       v[j] = temp;
       i++;
       j--;
       }
       return;
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    // display(v);
    // //reverse
    // int i=0;
    // int j = v.size()-1;
    // //    swap v[i] and v[j]
    //    while(i<=j){
    //    int temp = v[i];
    //    v[i] = v[j];
    //    v[j] = temp;
    //    i++;
    //    j--;
    //    }

    //    for(int i=0,j=v.size()-1;i<=j;i++,j--){
    //    int temp = v[i];
    //    v[i] = v[j];
    //    v[j] = temp;
    //    }
    // reverse(v.begin(),v.end());
    reverse(v);
    display(v);
    reversePart(0,2,v);
    display(v);
}