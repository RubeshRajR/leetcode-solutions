class Solution {
public:
    int countElements(vector<int>& nums) {
        int s=*min_element(nums.begin(),nums.end());
        int l=*max_element(nums.begin(),nums.end());
        int count=0;
        for(int i:nums){
            if(i>s&&i<l){
                count++;
            }
        }
        return count;
    }
};