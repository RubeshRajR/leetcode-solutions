class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i:arr){
            mp[i]++;
        }
        int n=arr.size();
        for(auto p:mp){
            if(p.second>n/4){
                return p.first;
            }
        }
        return -1;
    }
};