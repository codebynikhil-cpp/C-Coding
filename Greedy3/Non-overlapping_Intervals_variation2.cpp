#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  
}

bool cmp(vector<int>& a, vector<int>& b){
  return a[0] < b[0];
}
class Solution {
public:
int eraseOverlapIntervals(vector<vector<int>>& intervals) {
  int ans = 0;
  int n = intervals.size();
  sort(intervals.begin(),intervals.end(), cmp);
  int lastEndTime = intervals[intervals.size()-1][0];
  for(int i=n-2;i>=0;i--){
      if(intervals[i][1] > lastEndTime){
          ans++;
      } else{
          lastEndTime = intervals[i][0];
      }
  }
  return ans;
}
};