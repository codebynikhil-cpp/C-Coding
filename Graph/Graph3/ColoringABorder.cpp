


class Solution {
    public:
        vector<pair<int, int> > internal;
        void dfs(vector<vector<int>> &grid , int r, int c, int newColor){
            if(r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || grid[r][c] == newColor) return;
            grid[r][c] = newColor;
            dfs(grid, r+1, c, newColor), dfs(grid, r-1, c, newColor),dfs(grid, r, c+1, newColor),dfs(grid, r, c-1, newColor);
    
            //Below code will be executed while coming back from recursion 
            if(not(r > 0 || c > 0 || r < grid.size() - 1 || c < grid[0].size() - 1 || grid[r+1][c] != newColor || grid[r-1][c]!=newColor || grid[r][c-1] != newColor || grid[r][c+1] != newColor)){
                internal.push_back({r,c}); // current cell is internal
            }
        }
    
        vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
            int originalColor = grid[row][row];
            dfs(grid, row, col, color);
            for(auto p : internal) {
                int i = p.first;
                int j = p.second;
                grid[i][j] = originalColor;
            }
            return grid;
        }
    };