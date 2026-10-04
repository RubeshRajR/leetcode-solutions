class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int minx=INT_MAX;
        int miny=INT_MAX;
        if(ops.empty()){
            return m*n;
        }
        for(auto v:ops){
            minx=min(minx,v[0]);
            miny=min(miny,v[1]);
        }
        return minx*miny;
    }
};