class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            int rev=26-(s[i]-'a');
            int prod=i+1;
            ans+=prod*rev;
        }
        return ans;
    }
};