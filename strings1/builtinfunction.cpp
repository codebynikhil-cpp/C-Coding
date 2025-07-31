#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // string str = "raghav garg is at PW";
    // cout<<str.size()<<endl;
    // cout<<str.length()<<endl;
    // cout<<str.substr(0,10)<<endl;
    // cout<<str.substr(10,20)<<endl;
    
    // string str = "abcd";
    // cout<<str<<endl;
    // str.push_back('e');
    // str.push_back('f');
    // str.push_back('g');
    // str.pop_back();
    // cout<<str<<endl;

    // string s = "abc";
    // cout<<s<<endl;
    // s = "xyz" + s;  // add 
    // cout<<s<<endl;
// 
    string s = "abcdef"; // 0 1 2 3 4 5 
    cout<<s<<endl;
    reverse(s.begin()+2,s.end()-1);
    // reverse(s.begin()+2,s.begin()+5);
    cout<<s<<endl;
}