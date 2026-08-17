class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int x=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(x==nums[i]){
                x++;
            }
        }
        return x;
    }
};