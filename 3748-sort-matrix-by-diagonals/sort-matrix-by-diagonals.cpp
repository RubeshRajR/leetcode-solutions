class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        for(int r=0;r<m;r++){
            vector<int>v;
            int i=r;
            int j=0;
            while(i<m&&j<n){
                v.push_back(grid[i][j]);
                i++;
                j++;
            }
            sort(v.rbegin(),v.rend());
            i=r;
            j=0;
            int k=0;
            while(i<m&&j<n){
                grid[i][j]=v[k++];
                i++;
                j++;
            }
        }
        for(int c=1;c<n;c++){
            vector<int>v;
            int j=c;
            int i=0;
            while(i<m&&j<n){
                v.push_back(grid[i][j]);
                i++;
                j++;
            }
            int k=0;
            i=0;
            j=c;
            sort(v.begin(),v.end());
            while(i<m&&j<n){
                grid[i][j]=v[k++];
                i++;
                j++;
            }
        }
        return grid;
    }
};