class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<int>ans;
        for(int i=0;i<r;i++){
            int mini=matrix[i][0];
            int z=0;
            bool flag=true;
            for(int j=0;j<c;j++){
                if(matrix[i][j]<mini){
                    mini=matrix[i][j];
                    z=j;
                }
            }
            for(int k=0;k<r;k++){
                if(mini<matrix[k][z]){
                    flag=false;
                    break;
                }
            }
            if(flag==true){
                ans.push_back(mini);
            }
        }
        return ans;
    }
};