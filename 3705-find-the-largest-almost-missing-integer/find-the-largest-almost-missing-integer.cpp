class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<=nums.size()-k;i++){
            unordered_set<int>st;
            for(int j=i;j<i+k;j++){
                st.insert(nums[j]);
            }
            for(int x:st){
                mp[x]++;
            }
        }
        int ans=-1;
        for(auto p:mp){
            if(p.second==1){
            ans=max(ans,p.first);
            }
        }
        return ans;
    }
};