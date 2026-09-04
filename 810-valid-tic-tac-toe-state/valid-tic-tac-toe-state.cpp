class Solution {
public:
     bool solve(vector<string>& b, char p) {

        for (int i = 0; i < 3; i++) {

            if (b[i][0] == p &&
                b[i][1] == p &&
                b[i][2] == p)
                return true;

            if (b[0][i] == p &&
                b[1][i] == p &&
                b[2][i] == p)
                return true;
        }

        if (b[0][0] == p &&
            b[1][1] == p &&
            b[2][2] == p)
            return true;

        if (b[0][2] == p &&
            b[1][1] == p &&
            b[2][0] == p)
            return true;

        return false;
    }

    bool validTicTacToe(vector<string>& board) {
        int x=0,o=0;
        for(auto row:board){
            for(char c:row){
                if(c=='X') x++;
                if(c=='O') o++;
            }
        }
        bool xwin=solve(board,'X');
        bool owin=solve(board,'O');
        if(xwin&&owin){
            return false;
        }
        if(xwin){
            return x==o+1;
        }
        if(owin){
            return x==o;
        }
        return x==o||x==o+1;
    }
};