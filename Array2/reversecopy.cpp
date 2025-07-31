#include<iostream>
#include<vector>
// #include<algorithm>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
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
    display(v);
    vector<int> v2(v.size());
    cout<<"reversed array :";
    for(int i=0;i<v2.size();i++){
        // i + j = size -1
        v2[i]=v[v.size() - 1 -i]; 
        }
    for(int i=0;i<n;i++){
        cout<<v2[i]<<" ";
        } 
}