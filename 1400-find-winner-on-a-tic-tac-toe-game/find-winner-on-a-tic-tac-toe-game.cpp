class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<int> row(3, 0);
        vector<int> col(3, 0);
        int diagonal = 0;
        int secdiagonal = 0;

        for (int i = 0; i < moves.size(); i++) {
            int r = moves[i][0];
            int c = moves[i][1];

            // A = +1, B = -1
            int value = (i % 2 == 0) ? 1 : -1;

            row[r] += value;
            col[c] += value;

            if (r == c) {
                diagonal += value;
            }

            if (r + c == 2) {
                secdiagonal += value;
            }

            if (abs(row[r]) == 3 ||
                abs(col[c]) == 3 ||
                abs(diagonal) == 3 ||
                abs(secdiagonal) == 3) {
                return (value == 1) ? "A" : "B";
            }
        }

        if (moves.size() == 9) {
            return "Draw";
        }

        return "Pending";
    }
};