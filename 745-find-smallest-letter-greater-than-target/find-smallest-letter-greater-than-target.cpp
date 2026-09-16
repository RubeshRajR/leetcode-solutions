class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<char>ans(letters.begin(),letters.end());
        sort(letters.begin(),letters.end());
        for(char ch:letters){
            if(ch>target){
                return ch;
            }
        }
        return ans[0];
    }
};