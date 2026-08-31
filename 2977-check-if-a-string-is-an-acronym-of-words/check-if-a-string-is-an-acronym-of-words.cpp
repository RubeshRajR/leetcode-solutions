class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string ss="";
        for(auto word:words){
            ss+=word[0];
        }
        return ss==s;
    }
};