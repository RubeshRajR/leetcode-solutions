class Solution {
public:
    int r,c;
    vector<vector<int>>grid;
    vector<vector<bool>>visited;
    int dfs(int i,int j,int remaining){
        if(grid[i][j]==2){
            if(remaining==1){
                return 1;
            }
            return 0;
        }
        int path=0;
        int dr[4]={-1,1,0,0};
        int dc[4]={0,0,-1,1};
        for(int k=0;k<4;k++){
            int ni=i+dr[k];
            int nj=j+dc[k];
            if(ni>=0&&ni<r&&nj>=0&&nj<c&&!visited[ni][nj]&&grid[ni][nj]!=-1){
                visited[ni][nj]=true;
                path+=dfs(ni,nj,remaining-1);
                visited[ni][nj]=false;
            }
        }
        return path;
    }


    int uniquePathsIII(vector<vector<int>>& grid) {
        this->grid=grid;
        r=grid.size();
        c=grid[0].size();
        int starti=0;
        int startj=0;
        int total=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]!=-1){
                    total++;
                }
                if(grid[i][j]==1){
                    starti=i;
                    startj=j;
                }
            }
        }
        visited.assign(r,vector<bool>(c,false));
        visited[starti][startj]=true;
        return dfs(starti,startj,total);
    }
};