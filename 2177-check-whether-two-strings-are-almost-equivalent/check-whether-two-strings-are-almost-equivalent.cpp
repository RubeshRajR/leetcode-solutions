class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(char ch:word1){
            mp1[ch]++;
        }
        for(char ch:word2){
            mp2[ch]++;
        }
        for(char ch='a';ch<='z';ch++){
            if(abs(mp1[ch]-mp2[ch])>3){
                return false;
            }
        }
        return true;
    }
};