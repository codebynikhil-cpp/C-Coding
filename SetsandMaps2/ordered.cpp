#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
  // set<int> s;
  // s.insert(5);
  // s.insert(3);
  // s.insert(7);
  // for(int ele:s){
  //   cout<<ele<<" ";
  // }

  map<string,int> m;
  m["harsh"] = 20;
  m["nikhil"] = 10;
  m["sanket"] = 30;
  for(auto x:m){
    cout<<x.first<<" ";
  }
}