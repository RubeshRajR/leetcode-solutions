class Solution {
public:
    vector<string> solve(string s,int index,unordered_set<string>&st){
        vector<string>ans;
        if(index==s.size()){
            ans.push_back("");
            return ans;
        }
        for(int end=index;end<s.size();end++){
            string word=s.substr(index,end-index+1);
            if(st.find(word)!=st.end()){
                vector<string>remaining=solve(s,end+1,st);
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
        return ans;
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>st;
        for(string c:wordDict){
            st.insert(c);
        }
        return solve(s,0,st);
    }
};