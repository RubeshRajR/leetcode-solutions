class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int n:nums){
            mp[n]++;
        }
        int maxfreq=0;
        for(auto p:mp){
            maxfreq=max(maxfreq,p.second);
        }
        int ans=0;
        for(auto p:mp){
            if(p.second==maxfreq){
                ans+=maxfreq;
            }
        }
        return ans;
    }
};