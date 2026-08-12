class Solution {
public:
    int solve(vector<vector<int>>&dungeon,int i,int j,vector<vector<int>>&dp){
        int r=dungeon.size();
        int c=dungeon[0].size();
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(i==r-1&&j==c-1){
            return dp[i][j]=max(1,1-dungeon[i][j]);
        }
        int right=INT_MAX;
        if(j+1<c){
            right=solve(dungeon,i,j+1,dp);
        }
        int down=INT_MAX;
        if(i+1<r){
            down=solve(dungeon,i+1,j,dp);
        }
        int needed=min(right,down);
        return dp[i][j]=max(1,needed-dungeon[i][j]);
    }
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
         int r=dungeon.size();
        int c=dungeon[0].size();
        vector<vector<int>>dp(r,vector<int>(c,-1));
        return solve(dungeon,0,0,dp);
    }
};