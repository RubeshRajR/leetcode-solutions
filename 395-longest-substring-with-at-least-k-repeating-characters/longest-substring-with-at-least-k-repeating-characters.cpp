class Solution {
public:
    int longestSubstring(string s, int k) {
        if(s.size()<k){
            return 0;
        }
        unordered_map<int,int>mp;
        for(char ch:s){
            mp[ch]++;
        }
        for(char ch:s){
            if(mp[ch]<k){
                int ans=0;
                string temp="";
                for(char x:s){
                    if(x==ch){
                        ans=max(ans,longestSubstring(temp,k));
                        temp="";
                    }
                    else{
                        temp+=x;
                    }
                }
                ans=max(ans,longestSubstring(temp,k));
            return ans;
            }
        }
        return s.size();
    }
};