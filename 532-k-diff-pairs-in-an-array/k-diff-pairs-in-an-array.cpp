class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int n:nums){
            mp[n]++;
        }
        int count=0;
        for(auto p:mp){
            if(k==0){
                if(p.second>=2){
                    count++;
                }
            }
                else{
                    if(mp.count(p.first+k)){
                        count++;
                    }
                }
        }
        return count;
    }
};