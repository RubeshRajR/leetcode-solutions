class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Check every row
        for(int i = 0; i < n; i++) {
            set<int> s;

            for(int j = 0; j < n; j++) {
                if(s.count(matrix[i][j])) {
                    return false;
                }

                s.insert(matrix[i][j]);
            }
        }

        // Check every column
        for(int j = 0; j < n; j++) {
            set<int> s;

            for(int i = 0; i < n; i++) {
                if(s.count(matrix[i][j])) {
                    return false;
                }

                s.insert(matrix[i][j]);
            }
        }

        return true;
    }
};
