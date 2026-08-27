class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n=nums.size();
        unordered_map<long long,long long>freq;
        long long totalpairs=1ll*n*(n-1)/2;
        long long goodpairs=0;
        for(int i=0;i<nums.size();i++){
            long long key=(long long)nums[i]-i;
            goodpairs+=freq[key];
            freq[key]++;
        }
        return totalpairs-goodpairs;
    }
};