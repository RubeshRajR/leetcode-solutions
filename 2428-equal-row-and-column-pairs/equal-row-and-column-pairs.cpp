class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count=0;
        map<vector<int>,int>mp;
        int n=grid.size();
        for(int i=0;i<n;i++){
            mp[grid[i]]++;
        }
        for(int c=0;c<n;c++){
            vector<int>col;
            for(int r=0;r<n;r++){
                col.push_back(grid[r][c]);
            }
            count+=mp[col];
        }
        return count;
    }
};