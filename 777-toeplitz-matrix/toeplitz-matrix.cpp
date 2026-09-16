class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int startcol=0;startcol<n;startcol++){
            int i=0;
            int j=startcol;
            int value=matrix[i][j];
            while(i<m&&j<n){
                if(matrix[i][j]!=value){
                    return false;
                }
                i++;
                j++;
            }
        }
        for(int startrow=0;startrow<m;startrow++){
            int i=startrow;
            int j=0;
            int value=matrix[i][j];
            while(i<m&&j<n){
                if(matrix[i][j]!=value){
                    return false;
                }
                i++;
                j++;
            }
        }
        return true;
    }
};