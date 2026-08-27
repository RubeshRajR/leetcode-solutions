class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        for(int i=0;i<r;i++){
            sort(grid[i].begin(),grid[i].end());
        }
        int ans=0;
        for(int j=c-1;j>=0;j--){
            int maxnum=0;
            for(int i=0;i<r;i++){
                maxnum=max(maxnum,grid[i][j]);
            }
            ans+=maxnum;
        }
        return ans;
    }
};