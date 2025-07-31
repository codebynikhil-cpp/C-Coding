#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printsubset(string ans,string original,vector<string>& v,bool flag){
    if (original==""){
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    if(original.length()==1){
        if(flag == true ) printsubset(ans+ch,original.substr(1),v,true);
        printsubset(ans,original.substr(1),v,true);
        return;// taki neeche ki do condition na chale
    }
    char dh = original[1];
    if(ch == dh){ // duplicate
        if(flag == true ) printsubset(ans+ch,original.substr(1),v,true);
        printsubset(ans,original.substr(1),v,false);
    }
    else{ // no duplicate
        if(flag == true ) printsubset(ans+ch,original.substr(1),v,true);
        printsubset(ans,original.substr(1),v,true);
    }
}
int main(){ 
    string str = "aaab";
    vector<string> v;
    printsubset("",str,v,true);
    for(string ele:v){
        cout<<ele<<endl;
    }
}