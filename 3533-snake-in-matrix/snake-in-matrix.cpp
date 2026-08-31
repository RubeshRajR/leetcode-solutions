class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int grid[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                grid[i][j]=(i*n)+j;
            }
        }
        int row=0,col=0;
        for(int i=0;i<commands.size();i++){
            if(commands[i]=="RIGHT"){
                col++;
            }
            else if(commands[i]=="DOWN"){
                row++;
            }
            else if(commands[i]=="UP"){
                row--;
            }
            else{
                col--;
            }
        }
        return grid[row][col];
    }
};