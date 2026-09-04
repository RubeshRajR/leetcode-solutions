class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            vector<int>mini;
            vector<int>maxi;
            for(int j=0;j<=i;j++){
            maxi.push_back(nums[j]);
            }
            for(int j=i;j<nums.size();j++){
                mini.push_back(nums[j]);
            }
            int diff=*max_element(maxi.begin(),maxi.end())-*min_element(mini.begin(),mini.end());
            if(diff<=k){
                return i;
            }
        }
        return -1;
    }
};