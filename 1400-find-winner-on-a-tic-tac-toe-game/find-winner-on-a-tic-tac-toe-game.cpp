class Solution {
public:
    bool solve(vector<vector<char>>&board,char p){
        for(int i=0;i<3;i++){
            if(board[i][0]==p&&board[i][1]==p&&board[i][2]==p){
                return true;
            }
            if(board[0][i]==p&&board[1][i]==p&&board[2][i]==p){
                return true;
            }
        }
        if(board[0][0]==p&&board[1][1]==p&&board[2][2]==p){
            return true;
        }
        if(board[0][2]==p&&board[1][1]==p&&board[2][0]==p){
            return true;
        }
        return false;
    }

    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<char>>board(3,vector<char>(3,'.'));
        for(int i=0;i<moves.size();i++){
            int r=moves[i][0];
            int c=moves[i][1];
            char player;
            if(i%2==0){
                player='A';
            }
            else{
                player='B';
            }
            board[r][c]=player;
            if(solve(board,player)){
                return string(1,player);
            }
        }
        if(moves.size()==9){
            return "Draw";
        }
        return "Pending";
    }
};