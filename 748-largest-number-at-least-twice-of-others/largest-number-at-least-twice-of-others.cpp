class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(maxi==nums[i]){
                k=i;
                break;
            }
        }
        int flag=0;
        for(int i=0;i<nums.size();i++){
            if(k!=i){
                if(maxi<(2*nums[i])){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0){
            return k;
        }
        else{
            return -1;
        }
    }
};