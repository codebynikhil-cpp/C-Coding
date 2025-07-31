#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cstring>
#define ll long long int
using namespace std;

ll n, m; // dimensions of the input matrix
char mat[105][105]; // input matrix
ll dp[105][105][105]; // memoization table

ll f(ll i, ll j, ll x, ll y) {
    if (i > n or j > m or x > n or y > m or mat[i][j] == '#' or mat[x][y] == '#') return 0;
    if (i == n and j == m) return mat[i][j] == '*';

    // Memoization: Return already computed result
    if (dp[i][j][x] != -1) return dp[i][j][x];

    ll result = INT_MIN;

    // Recursive calls for all possible moves
    result = max(result, f(i+1, j, x+1, y));   // Both move down
    result = max(result, f(i+1, j, x, y+1));   // First moves down, second moves right
    result = max(result, f(i, j+1, x+1, y));   // First moves right, second moves down
    result = max(result, f(i, j+1, x, y+1));   // Both move right

    // Add stars collected at current positions
    result += (mat[i][j] == '*');
    result += (mat[x][y] == '*');

    // Avoid double-counting if both are at the same cell
    if (i == x and j == y and mat[i][j] == '*') result--;

    // Store the result in the memoization table
    return dp[i][j][x] = result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;

        // Input the matrix
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> mat[i][j];
            }
        }

        // Initialize the dp table
        memset(dp, -1, sizeof(dp));

        // Handle blocked starting or ending points
        if (mat[0][0] == '#' or mat[n-1][m-1] == '#') {
            cout << "0\n";
            continue;
        }

        // Call the function and print the result
        cout << f(1, 1, 1, 1) << "\n";
    }

    return 0;
}