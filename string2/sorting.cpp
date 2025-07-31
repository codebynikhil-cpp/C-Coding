#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);//for spaces
    sort(s.begin(),s.end());
    cout<<s;
    return 0;
}