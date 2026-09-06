
class Solution {
public:
    string s, t;

    long long solve(int i, int j, vector<vector<long long>>& dp) {
        // Entire t has been matched
        if (j == t.size()) {
            return 1;
        }

        // s is exhausted but t is not
        if (i == s.size()) {
            return 0;
        }

        if (dp[i][j] != -1) {
            return dp[i][j];
        }

        if (s[i] == t[j]) {
            // Take s[i] OR skip s[i]
            return dp[i][j] =
                solve(i + 1, j + 1, dp) +
                solve(i + 1, j, dp);
        }

        // Characters don't match, so skip s[i]
        return dp[i][j] = solve(i + 1, j, dp);
    }

    int numDistinct(string s, string t) {
        this->s = s;
        this->t = t;

        vector<vector<long long>> dp(
            s.size(),
            vector<long long>(t.size(), -1)
        );

        return solve(0, 0, dp);
    }
};