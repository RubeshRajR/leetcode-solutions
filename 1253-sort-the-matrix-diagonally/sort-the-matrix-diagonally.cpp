class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {

        int m = mat.size();
        int n = mat[0].size();

        // Start from every row in first column
        for(int r = 0; r < m; r++)
        {
            vector<int> v;

            int i = r;
            int j = 0;

            while(i < m && j < n)
            {
                v.push_back(mat[i][j]);
                i++;
                j++;
            }

            sort(v.begin(), v.end());

            i = r;
            j = 0;

            int k = 0;

            while(i < m && j < n)
            {
                mat[i][j] = v[k++];
                i++;
                j++;
            }
        }

        // Start from every column in first row except (0,0)
        for(int c = 1; c < n; c++)
        {
            vector<int> v;

            int i = 0;
            int j = c;

            while(i < m && j < n)
            {
                v.push_back(mat[i][j]);
                i++;
                j++;
            }

            sort(v.begin(), v.end());

            i = 0;
            j = c;

            int k = 0;

            while(i < m && j < n)
            {
                mat[i][j] = v[k++];
                i++;
                j++;
            }
        }

        return mat;
    }
};