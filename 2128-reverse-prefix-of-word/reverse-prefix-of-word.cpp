class Solution {
public:
    string reversePrefix(string word, char ch) {
        int z=0;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                z=i;
                break;
            }
        }
        string ans="";
        for(int i=z;i>=0;i--){
            ans+=word[i];
        }
        for(int i=z+1;i<word.size();i++){
            ans+=word[i];
        }
        return ans;
    }
};