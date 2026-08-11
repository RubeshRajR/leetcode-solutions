class Solution {
public:
bool solve(string s,int index,unordered_set<string>&st,vector<int>&dp){
    if(index==s.size()){
        return true;
    }
    if(dp[index]!=-1){
        return dp[index];
    }
    for(int end=index;end<s.size();end++){
        string word=s.substr(index,end-index+1);
        if(st.find(word)!=st.end()){
            if(solve(s,end+1,st,dp)){
                dp[index]=1;
                return true;
            }
        }
    }
    dp[index]=0;
    return false;
}
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>st;
        for(auto c:wordDict){
            st.insert(c);
        }
        int n=s.size();
        vector<int>dp(n+1,-1);
        return solve(s,0,st,dp);
    }
};