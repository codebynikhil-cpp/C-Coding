#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6);   //1 1
    v.push_back(1);   //2 2  
    v.push_back(9);   //3 4 
    v.push_back(10);  //4 4 
    v.push_back(1);   //5 8
    v.push_back(9);   //6 8
     for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\nSize is :"<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\nSize is :"<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;
}