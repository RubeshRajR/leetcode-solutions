class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>mp;
        for(char ch:s){
            mp[ch]++;
        }
        int maxodd=INT_MIN;
        int mineven=INT_MAX;
        for(auto p:mp){
            if(p.second%2!=0){
                maxodd=max(maxodd,p.second);
            }
            else{
                mineven=min(mineven,p.second);
            }
        }
        return maxodd-mineven;
    }
};