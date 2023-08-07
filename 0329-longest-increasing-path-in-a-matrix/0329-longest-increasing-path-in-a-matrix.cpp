class Solution {
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
         if (matrix.empty()) return 0;
        
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        
        int maxPath = 1;
        
        // Define possible directions (up, down, left, right)
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        
        function<int(int, int)> dfs = [&](int row, int col) -> int {
            if (dp[row][col] > 0) return dp[row][col];
            
            int maxSubPath = 0;
            
            for (const auto& dir : directions) {
                int newRow = row + dir.first;
                int newCol = col + dir.second;
                
                if (newRow >= 0 && newRow < m && newCol >= 0 && newCol < n && matrix[newRow][newCol] > matrix[row][col]) {
                    int subPath = dfs(newRow, newCol);
                    maxSubPath = max(maxSubPath, subPath);
                }
            }
            
            dp[row][col] = maxSubPath + 1;
            return dp[row][col];
        };
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                maxPath = max(maxPath, dfs(i, j));
            }
        }
        
        return maxPath;
    }
};