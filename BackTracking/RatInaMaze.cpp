#include<bits/stdc++.h>
using namespace std;

int ans;

bool canWeGo(int n, int i, int j, vector<vector<int>>& grid) {
    return i >= 0 && j >= 0 && i < n && j < n && grid[i][j] == 1;
}

void f(vector<vector<int>>& grid, int n, int i, int j) {
    if (i == n - 1 && j == n - 1) {
        ans += 1;
        return;
    }

    grid[i][j] = 2; // Mark as visited

    // Try all 4 directions
    if (canWeGo(n, i, j - 1, grid)) f(grid, n, i, j - 1); // Left
    if (canWeGo(n, i - 1, j, grid)) f(grid, n, i - 1, j); // Up
    if (canWeGo(n, i, j + 1, grid)) f(grid, n, i, j + 1); // Right
    if (canWeGo(n, i + 1, j, grid)) f(grid, n, i + 1, j); // Down
   grid[i][j] = 1; // Backtrack: Restore original value (1 for path)
}

int ratInAMaze(vector<vector<int>>& grid, int n) {
    ans = 0;
    if (grid[0][0] == 1) // Only start if starting cell is valid
        f(grid, n, 0, 0);
    return ans;
}

int main() {
    vector<vector<int>> grid = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 1, 0},
        {0, 1, 1, 1}
    };
    cout << ratInAMaze(grid, 4);
    return 0;
}