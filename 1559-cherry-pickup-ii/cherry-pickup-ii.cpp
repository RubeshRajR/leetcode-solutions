class Solution {
public:

    int rows, cols;
    vector<vector<vector<int>>> dp;

    int solve(int row, int col1, int col2, vector<vector<int>>& grid)
    {
        if (col1 < 0 || col1 >= cols ||
            col2 < 0 || col2 >= cols)
        {
            return -1e9;
        }
        if (dp[row][col1][col2] != -1)
        {
            return dp[row][col1][col2];
        }
        if (row == rows - 1)
        {
            if (col1 == col2)
                return dp[row][col1][col2] = grid[row][col1];

            return dp[row][col1][col2] =
                grid[row][col1] + grid[row][col2];
        }
        int cherries;

        if (col1 == col2)
            cherries = grid[row][col1];
        else
            cherries = grid[row][col1] + grid[row][col2];

        int best = -1e9;
        for (int d1 = -1; d1 <= 1; d1++)
        {
            for (int d2 = -1; d2 <= 1; d2++)
            {
                int newCol1 = col1 + d1;
                int newCol2 = col2 + d2;

                int future = solve(row + 1,
                                   newCol1,
                                   newCol2,
                                   grid);

                best = max(best, future);
            }
        }

        return dp[row][col1][col2] = cherries + best;
    }

    int cherryPickup(vector<vector<int>>& grid)
    {
        rows = grid.size();
        cols = grid[0].size();

        dp.assign(rows,
                  vector<vector<int>>(
                      cols,
                      vector<int>(cols, -1)
                  ));

        return solve(0, 0, cols - 1, grid);
    }
};