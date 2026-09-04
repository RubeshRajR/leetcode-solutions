class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<bool>row(m,false);
        vector<bool>col(n,false);
        for(auto &index:indices){
            int r=index[0];
            int c=index[1];
            row[r]=!row[r];
            col[c]=!col[c];
        }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(row[i]!=col[j]){
                    ans++;
                }
            }
    }
        return ans;
    }
};