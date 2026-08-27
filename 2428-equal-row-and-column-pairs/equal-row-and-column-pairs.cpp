class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count=0;
        int n=grid.size();
        for(int r=0;r<n;r++){
            for(int c=0;c<n;c++){
                bool same=true;
                for(int k=0;k<n;k++){
                    if(grid[r][k]!=grid[k][c]){
                        same=false;
                    }
                }
                if(same){
                    count++;
                }
            }
        }
        return count;
    }
};