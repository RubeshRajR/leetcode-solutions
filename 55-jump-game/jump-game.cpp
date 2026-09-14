class Solution {
public:
    bool canJump(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++){
            if(i>x){
                return false;
            }
            x = max(x, i + nums[i]);
            if(x>=nums.size()-1){
                return true;
            }
        }
        return false;
    }
};


// Start from index 0 and keep track of the farthest index we can reach using x.
// If the current index i is greater than x, it means we cannot reach that index, so return false.
// Otherwise, update x with the farthest position reachable from the current index: max(x, i + nums[i]).
// If x reaches the last index, return true; if the loop finishes without reaching it, return false.