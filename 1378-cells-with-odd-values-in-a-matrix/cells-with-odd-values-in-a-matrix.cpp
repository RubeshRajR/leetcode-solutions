class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>>mat(m,vector<int>(n,0));
        for(auto &index:indices){
            int r=index[0];
            int c=index[1];
            for(int i=0;i<n;i++){
                mat[r][i]+=1;
            }
            for(int i=0;i<m;i++){
                mat[i][c]+=1;
            }
        }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]%2!=0){
                    ans++;
                }
            }
        }
        return ans;
    }
};