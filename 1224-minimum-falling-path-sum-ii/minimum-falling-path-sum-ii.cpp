class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>dp(n,vector<int>(n));
        for(int j=0;j<n;j++){
            dp[0][j]=grid[0][j];
        }
        for(int i=1;i<n;i++){
            int min1=INT_MAX;
            int min2=INT_MAX;
            int min1index=-1;
            for(int j=0;j<n;j++){
                if(dp[i-1][j]<min1){
                    min2=min1;
                    min1=dp[i-1][j];
                    min1index=j;
                }
                else if(dp[i-1][j]<min2){
                    min2=dp[i-1][j];
                }
            }
            for(int j=0;j<n;j++){
                if(j!=min1index){
                    dp[i][j]=grid[i][j]+min1;
                }
                else{
                    dp[i][j]=grid[i][j]+min2;
                }
            }
        }
        return *min_element(dp[n-1].begin(),dp[n-1].end());
    }
};