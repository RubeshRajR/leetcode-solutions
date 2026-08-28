class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                mp[i-j].push_back(grid[i][j]);
            }
        }
        for(auto &p:mp){
            if(p.first>=0){
                sort(p.second.rbegin(),p.second.rend());
            }
            else{
                sort(p.second.begin(),p.second.end());
            }
        }
        map<int,int>index;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int key=i-j;
                grid[i][j]=mp[key][index[key]];
                index[key]++;
            }
        }
        return grid;
    }
};