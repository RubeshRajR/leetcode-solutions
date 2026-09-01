class Solution {
public:
    bool solve(vector<vector<char>>&board,vector<vector<int>>&row,vector<vector<int>>&col,vector<vector<int>>&box){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    continue;
                }
                int b=(i/3)*3+j/3;
                for(int num=1;num<=9;num++){
                if(row[i][num]||col[j][num]||box[b][num])
                continue;
                    board[i][j]=num+'0';
                    row[i][num]=1;
                    col[j][num]=1;
                    box[b][num]=1;
                    if(solve(board,row,col,box)){
                        return true;
                    }
                    board[i][j]='.';
                    row[i][num]=0;
                    col[j][num]=0;
                    box[b][num]=0;
                }
                return false;
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        vector<vector<int>>row(9,vector<int>(10));
        vector<vector<int>>col(9,vector<int>(10));
        vector<vector<int>>box(9,vector<int>(10));
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                if(board[r][c]!='.'){
                    int num=board[r][c]-'0';
                    int b=(r/3)*3+c/3;
                    row[r][num]=1;
                    col[c][num]=1;
                    box[b][num]=1;
                }
            }
        }
        solve(board,row,col,box);
    }
};