#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
      int minMeetingRooms(vector<Interval> &intervals) {
          vector<int> start,ending;
          for(auto el : intervals){
              start.push_back(el[0]);
              ending.push_back(el[1]);
          }
          sort(start.begin(),start.end());
          sort(ending.begin(),ending.end());
  
          int ans;
          int rooms = 0;
          int i=0,j = 0;
          while(i<start.size() and j<ending.size()){
              // a meeting is starting
              if(start[i] < ending[j]){
                  rooms++;
                  ans = max(ans,rooms);
                  i++;
              }
              else if(start[i] > ending[j]){
                  rooms--;
                  j++;
              } else{
                  i++;
                  j++;
              }
          }
          return ans;
      }
  };
int main(){
  
}