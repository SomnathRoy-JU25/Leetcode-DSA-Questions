//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
  int numberOfEnclaves(vector<vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    // Step 2: Mark boundary-connected land cells as visited using DFS
    for (int i = 0; i < rows; i++) {
        if (grid[i][0] == 1) {
            dfs(grid, i, 0 , rows , cols);
        }
        if (grid[i][cols - 1] == 1) {
            dfs(grid, i, cols - 1 , rows , cols);
        }
    }
    for (int j = 0; j < cols; j++) {
        if (grid[0][j] == 1) {
            dfs(grid, 0, j , rows , cols);
        }
        if (grid[rows - 1][j] == 1) {
            dfs(grid, rows - 1, j , rows , cols);
        }
    }
    
    // Step 3: Count remaining land cells
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                count++;
            }
        }
    }
    
    // Step 4: Return the count of land cells not connected to the boundary
    return count;
}

void dfs(vector<vector<int>>& grid, int i, int j,int rows,int cols) {
    // DFS function to mark connected land cells as visited
    if (i < 0 || i >= rows || j < 0 || j >= cols || grid[i][j] == 0) {
        return;  // Out of bounds or sea cell
    }
    // Mark the current cell as visited
    grid[i][j] = 0;
    
    // Continue DFS in all four directions
    dfs(grid, i + 1, j , rows, cols);
    dfs(grid, i - 1, j , rows ,cols);
    dfs(grid, i, j + 1 , rows ,cols);
    dfs(grid, i, j - 1 , rows, cols);
  }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends