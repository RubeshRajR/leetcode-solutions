class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>w1;
        vector<string>w2;
        string words1="";
        string words2="";
        for(char ch:s1){
            if(ch==' '){
                w1.push_back(words1);
                words1="";
            }
            else{
                words1+=ch;
            }
        }
        w1.push_back(words1);
        for(char ch:s2){
            if(ch==' '){
                w2.push_back(words2);
                words2="";
            }
            else{
                words2+=ch;
            }
        }
        w2.push_back(words2);
        unordered_map<string,int>mp;
        for(auto s:w1){
            mp[s]++;
        }
        for(auto s:w2){
            mp[s]++;
        }
        vector<string>ans;
        for(auto p:mp){
            if(p.second==1){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};