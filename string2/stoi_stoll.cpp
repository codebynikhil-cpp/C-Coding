#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    string str = "1234534534589";
    // int x = stoi(str);
    // cout<<x+1<<endl;
    // string str2 = to_string(x);
    // cout<<str2<<endl;

    // stoll
    long long x = stoll(str);
    cout<<x;
    
}