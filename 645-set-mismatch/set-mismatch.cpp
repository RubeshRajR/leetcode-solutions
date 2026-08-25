class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
         int duplicate = -1;
        int missing = -1;
        for (int i = 1; i <= nums.size(); i++) {
            if (mp[i] == 2) {
                duplicate=i;     
            }
            else if (mp[i] == 0) {
               missing=i;      
            }
        }
        return {duplicate,missing};
    }
};