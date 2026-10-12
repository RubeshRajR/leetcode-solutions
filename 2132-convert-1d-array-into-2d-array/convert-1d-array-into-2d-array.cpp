class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int s=original.size();
        if(m*n!=s){
            return {};
        }
        vector<vector<int>>ans(m,vector<int>(n));
        int z=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=original[z++];
            }
        }
        return ans;
    }
};