class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                mp[i-j].push_back(mat[i][j]);
            }
        }
        for(auto &p:mp){
            sort(p.second.rbegin(),p.second.rend());
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int key=i-j;
                mat[i][j]=mp[key].back();
                mp[key].pop_back();
            }
        }
        return mat;
    }
};