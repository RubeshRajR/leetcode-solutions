class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& queries) {
        long long sum=0;
        int rowsdone=0;
        int colsdone=0;
        vector<bool>r(n,false);
        vector<bool>c(n,false);
        for(int k=queries.size()-1;k>=0;k--){
            int t=queries[k][0];
            int index=queries[k][1];
            int value=queries[k][2];
            if(t==0){
                if(r[index]){
                    continue;
                }
                sum+=1ll*value*(n-colsdone);
                rowsdone++;
                r[index]=true;
            }
            else{
                if(c[index]){
                    continue;
                }
                sum+=1ll*value*(n-rowsdone);
                colsdone++;
                c[index]=true;
            }
        }
        return sum;
    }
};