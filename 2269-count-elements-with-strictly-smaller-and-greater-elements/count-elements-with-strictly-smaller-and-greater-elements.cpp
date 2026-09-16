class Solution {
public:
    int countElements(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int s=0;
            int l=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j]){
                    l++;
                }
                if(nums[i]<nums[j]){
                    s++;
                }
            }
            if(s>=1&&l>=1){
                count++;
            }
        }
        return count;
    }
};