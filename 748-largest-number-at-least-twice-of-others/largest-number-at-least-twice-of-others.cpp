class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest=-1;
        int secondlargest=-1;
        int index=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>largest){
                secondlargest=largest;
                largest=nums[i];
                index=i;
            }
            else if(nums[i]>secondlargest){
                secondlargest=nums[i];
            }
        }
        if(largest>=2*secondlargest){
            return index;
        }
        return -1;
    }
};