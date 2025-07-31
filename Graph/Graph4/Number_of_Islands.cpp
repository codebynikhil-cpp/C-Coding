#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 

int main(){
    
}
class Solution {
    public:
        int numIslands(vector<vector<char>>& grid) {
            int row = grid.size();
            int cols = grid[0].size();
    
            int cc = 0; // Stores the number of Connected Components
            for(int r = 0; r < row; r++){
                for(int c = 0; c < cols; c++){
                    if(grid[r][c] == '0'){
                        // It is a water Body
                        continue;
                    }
                    // New unvisited land piece found, i.e new connected component
                    cc++;
                    grid[r][c] = '0'; // Mark it as Visited
                    queue<pair<int, int> > qu;
                    qu.push({r,c}); // Store the src node
                    while(not qu.empty()){
                        auto curr = qu.front(); //Get one node from queue
                        qu.pop();
                        // go to all unvisited neighbours of the curr node
                        int currRow = curr.first;
                        int currCol = curr.second;
                        //Check Up
                        if(currRow - 1 >= 0 and grid[currRow - 1][currCol] == '1'){
                            qu.push({currRow - 1, currCol});
                            grid[currRow - 1][currCol] = '0';
                        }
                        //Check Down
                        if(currRow + 1 < row and grid[currRow + 1][currCol] == '1'){
                            qu.push({currRow +1, currCol});
                            grid[currRow + 1][currCol] = '0';
                        }
                        //Check left
                        if(currCol - 1 >= 0 and grid[currRow][currCol - 1] == '1'){
                            qu.push({currRow, currCol - 1});
                            grid[currRow][currCol - 1] = '0';
                        }
                        //Check Right
                        if(currCol + 1 < cols and grid[currRow][currCol + 1] == '1'){
                            qu.push({currRow, currCol + 1});
                            grid[currRow][currCol + 1] = '0';
                        }
                    }
                }
            }
            return cc;
        }
    };