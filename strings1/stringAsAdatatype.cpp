#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    // cin>>s;// only if the given string has no spaces
    getline(cin,s);// if the given string has spaces    
    cout<<s;
}