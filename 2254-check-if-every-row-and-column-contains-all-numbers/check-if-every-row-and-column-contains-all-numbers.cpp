class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            vector<bool>vis(n+1,false);
            for(int j=0;j<n;j++){
                int x=matrix[i][j];
                if(vis[x]){
                    return false;
                }
                vis[x]=true;
            }
        }
        for(int j=0;j<n;j++){
            vector<bool>seen(n+1,false);
            for(int i=0;i<n;i++){
                int x=matrix[i][j];
                if(seen[x]){
                    return false;
                }
                seen[x]=true;
            }
        }
        return true;
    }
};