class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>>row(9);
        vector<unordered_set<int>>col(9);
        vector<unordered_set<int>>box(9);
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                if(board[r][c]=='.'){
                    continue;
                }
                char num=board[r][c];
                int b=(r/3)*3+c/3;
                if(row[r].count(num)||col[c].count(num)||box[b].count(num)){
                    return false;
                }
                row[r].insert(num);
                col[c].insert(num);
                box[b].insert(num);
            }
        }
        return true;
    }
};