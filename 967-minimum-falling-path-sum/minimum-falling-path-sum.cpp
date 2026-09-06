class Solution {
public:
    int solve(vector<vector<int>>& mat, vector<vector<int>>& dp,
              int n, int i, int j) {

        if (j < 0 || j >= n)
            return INT_MAX;

        if (i == n - 1)
            return mat[i][j];

        if (dp[i][j] != INT_MAX)
            return dp[i][j];

        int down = solve(mat, dp, n, i + 1, j);
        int left = solve(mat, dp, n, i + 1, j - 1);
        int right = solve(mat, dp, n, i + 1, j + 1);

        return dp[i][j] = mat[i][j] + min({down, left, right});
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();

        vector<vector<int>> dp(n, vector<int>(n, INT_MAX));

        int ans = INT_MAX;

        for (int j = 0; j < n; j++) {
            ans = min(ans, solve(matrix, dp, n, 0, j));
        }

        return ans;
    }
};