class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>mp1;
        unordered_map<string,int>mp2;
        for(auto w:words1){
            mp1[w]++;
        }
        for(auto w:words2){
            mp2[w]++;
        }
        int ans=0;
         for (auto &[word, freq] : mp1) {
            if (freq == 1 && mp2[word] == 1)
                ans++;
        }
        return ans;
    }
};