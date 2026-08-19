class Solution {
public:
    int solve(vector<int>&piles,int l,int r,vector<vector<int>>&dp){
        if(l==r){
            return piles[r];
        }
        if(dp[l][r]!=-1){
            return dp[l][r];
        }
        int left=piles[l]-solve(piles,l+1,r,dp);
        int right=piles[r]-solve(piles,l,r-1,dp);
        return dp[l][r]=max(left,right);
    }
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return solve(piles,0,piles.size()-1,dp)>0;
    }
};