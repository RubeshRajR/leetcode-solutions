class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>trustby(n+1,0);
        vector<int>trustno(n+1,0);
        for(auto t:trust){
            int a=t[0];
            int b=t[1];
            trustby[b]++;
            trustno[a]++;
        }
        for(int i=1;i<=n;i++){
            if(trustby[i]==n-1&&trustno[i]==0){
                return i;
            }
        }
        return -1;
    }
};