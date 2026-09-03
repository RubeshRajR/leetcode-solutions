class Solution {
public:
 int cross(vector<int>& A, vector<int>& B, vector<int>& C) {
        return (B[0]-A[0]) * (C[1]-A[1])
             - (B[1]-A[1]) * (C[0]-A[0]);
    }


    vector<vector<int>> outerTrees(vector<vector<int>>& trees) {
           if (trees.size() <= 1)
            return trees;
        vector<vector<int>>lower,upper;
        sort(trees.begin(),trees.end());
        for(auto p:trees){
            while(lower.size()>=2&&cross(lower[lower.size()-2],lower.back(),p)<0){
                lower.pop_back();
            }
            lower.push_back(p);
        }
        for(int i=trees.size()-1;i>=0;i--){
            auto p=trees[i];
            while(upper.size()>=2&&cross(upper[upper.size()-2],upper.back(),p)<0){
                upper.pop_back();
            }
            upper.push_back(p);
        }
        lower.pop_back();
        upper.pop_back();
        lower.insert(lower.end(),upper.begin(),upper.end());
        sort(lower.begin(),lower.end());
        lower.erase(unique(lower.begin(),lower.end()),lower.end());
        return lower;

    }
};