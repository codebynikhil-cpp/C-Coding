// https://leetcode.com/problems/maximum-units-on-a-truck/

#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){

}
bool cmp(vector<int> &a,vector<int> &b){
  return a[1] > b[1];
}
class Solution {
public:
  int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
    /**
     * Time: O(nlogn)
     * Space: O(sort)
    */
    sort(boxTypes.begin(),boxTypes.end(),cmp);
    int profit = 0;
    for(int i=0;i<boxTypes.size();i++){
      if(boxTypes[i][0] <= truckSize){
          profit += boxTypes[i][0]*boxTypes[i][1];
          truckSize -= boxTypes[i][0];
      } else{
          profit += truckSize*boxTypes[i][1];
          break;
      }
      // if(truckSize == 0) break;
    }
    return profit;  
  }
};