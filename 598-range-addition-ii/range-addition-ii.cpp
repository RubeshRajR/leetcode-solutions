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

// Each operation increments a top-left x × y rectangle. The cells with the maximum value are the cells common to all operations, so their dimensions are the minimum x and minimum y among all operations. Therefore, answer = minX × minY. If there are no operations, all m × n cells remain maximum.

// Time:  O(k)   → k = number of operations
// Space: O(1)

// Key idea to remember:
// 👉 Maximum value = cells affected by EVERY operation → take minimum row × minimum column.