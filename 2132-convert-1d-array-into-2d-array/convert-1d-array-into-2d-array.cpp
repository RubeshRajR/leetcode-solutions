class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(m*n!=original.size()){
            return {};
        }
        vector<vector<int>>ans(m,vector<int>(n));
        int z=0;
        for(int i=0;i<original.size();i++){
                ans[i/n][i%n]=original[z++];
            }
        return ans;
    }
};

// nstead of using two nested loops, we use one loop and calculate the row and column.
// - i / n → row index
// - i % n → column index
// For example, original = [1,2,3,4,5,6], m = 2, n = 3:
// i	i / n (row)	i % n (column)	Element
// 0	0	0	1
// 1	0	1	2
// 2	0	2	3
// 3	1	0	4
// 4	1	1	5
// 5	1	2	6
// Output: [[1,2,3],[4,5,6]]