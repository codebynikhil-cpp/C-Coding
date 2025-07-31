#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v(5);
    string s = "AZYZXBDXJK";
    string str;
    for(int i=0;i<s.length();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }

    sort(str.begin(),str.end());
        cout<<str;
    return 0;
}