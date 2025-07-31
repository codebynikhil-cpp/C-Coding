#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // string s = "abcdef";
    // // s.substr(idx)
    // cout<<s.substr(2,2); //ef
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    // abcdefgh -> n = 8 
    int n = str.length();
    cout<<str.substr(n/2);
}