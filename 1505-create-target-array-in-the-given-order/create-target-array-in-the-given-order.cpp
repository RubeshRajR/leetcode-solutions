class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n=nums.size();
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++){
            int pos=index[i];
            for(int j=i;j>pos;j--){
                ans[j]=ans[j-1];
            }
            ans[pos]=nums[i];
        }
        return ans;
    }
};