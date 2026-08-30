class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minindex=0;
        int maxindex=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]<nums[minindex]){
                minindex=i;
            }
            if(nums[i]>nums[maxindex]){
                maxindex=i;
            }
        }
        int left=min(minindex,maxindex);
        int right=max(minindex,maxindex);
        int front =right+1;
        int back=n-left;
        // Remove left from front and right from back
        int both=(left+1)+(n-right);
        //why here no right from front because it will also cover the left(min)
        return min({front,back,both});
    }
};