class Solution {
public:
    vector<string> solve(string s,int index,unordered_set<string>&st,vector<vector<string>>&dp,vector<bool>&visited){
        vector<string>ans;
        if(index==s.size()){
            return {""};
        }
        if(visited[index]){
            return dp[index];
        }
        for(int end=index;end<s.size();end++){
            string word=s.substr(index,end-index+1);
            if(st.find(word)!=st.end()){
                vector<string>remaining=solve(s,end+1,st,dp,visited);
                for(auto m:remaining){
                    if(m==""){
                        ans.push_back(word);
                    }
                    else{
                        ans.push_back(word + " " +m);
                    }
                }
            }
        }
        dp[index]=ans;
        return ans;
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>st;
        for(string c:wordDict){
            st.insert(c);
        }
        int n=s.size();
        vector<vector<string>>dp(n+1);
        vector<bool>visited(n+1,false);
        return solve(s,0,st,dp,visited);
    }
};