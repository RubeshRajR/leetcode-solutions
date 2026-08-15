class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int total=0;
        bool hasnonzero=false;
        for(int x:nums){
            total^=x;
            if(x!=0){
                hasnonzero=true;
            }
        }
        if(total!=0){
            return nums.size();
        }
        if(hasnonzero){
            return nums.size()-1;
        }
        return 0;
    }
};