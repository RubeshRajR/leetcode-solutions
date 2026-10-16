class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        vector<vector<int>>temp(n,vector<int>(n));
        for(int i=0;i<rowShift.size();i++){
            int k=rowShift[i]%n;
            for(int j=0;j<n;j++){
                int newcol=(j-k+n)%n;
                temp[i][newcol]=grid[i][j];
            }
        }
        grid=temp;
        for(int j=0;j<rowShift.size();j++){
            int k=colShift[j]%n;
            for(int i=0;i<n;i++){
                int newrow=(i-k+n)%n;
                temp[newrow][j]=grid[i][j];
            }
        }
        return temp;        
    }
};

// Problem idea: We are given a square matrix, an array rowShift, and an array colShift. First, shift each row to the left according to rowShift. Then, shift each column upward according to colShift.
// Cyclic shift: An element that moves beyond one end comes back at the other end. No elements are lost.
// Why use a temporary grid? To store elements in their new positions without overwriting values that we still need.
// Why use k = rowShift[i] % n? A complete rotation brings the row back to its original position. For example, shifting a row of size 3 by 7 positions is equivalent to shifting it by 1 position, because 7 % 3 = 1. This reduces unnecessary rotations.
// Why use modulo in the destination formula? It ensures that the destination index stays within the valid range. In C++, subtracting the shift can produce a negative number, so we use modulo carefully to avoid invalid indices.
// Row shifting: Keep the row index fixed and calculate the new column index.
// Column shifting: Keep the column index fixed and calculate the new row index.
// Important lesson: Never change the loop variable itself to move an element. Calculate its destination separately.
// Complexity: Time — \(O(n^2)\); extra space — \(O(n^2)\).