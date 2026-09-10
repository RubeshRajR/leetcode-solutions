class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mp;
        string word;
        stringstream ss1(s1);
        while (ss1 >> word)
            mp[word]++;
        stringstream ss2(s2);
        while (ss2 >> word)
            mp[word]++;
        vector<string> ans;
        for (auto &[word, freq] : mp) {
            if (freq == 1)
                ans.push_back(word);
        }
        return ans;
    }
};
