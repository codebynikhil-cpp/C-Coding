//https://leetcode.com/problems/boats-to-save-people/

class Solution {
  public:
      int numRescueBoats(vector<int>& people, int limit) {
        /**
         * Time: O(nlogn)
         * Space: O(sort)
        */
          sort(people.begin(),people.end());
          int i = 0;
          int bt = 0;
          int j = people.size()-1;
          while(i<=j){
              if(people[i] + people[j] <= limit){
                  bt++; // allocate the boat to the pair
                  i++;
                  j--;
              } else{
                  bt++; //allocate the boat to the heaviest
                  j--;
              }
          }
          return bt;
      }
  };