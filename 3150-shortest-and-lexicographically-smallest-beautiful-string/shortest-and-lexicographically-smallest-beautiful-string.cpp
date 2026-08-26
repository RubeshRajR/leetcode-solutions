class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans="";
        int left=0;
        int ones=0;
        for(int right=0;right<s.size();right++){
            if(s[right]=='1'){
                ones++;
            }
            while(ones>k){
                if(s[left]=='1'){
                    ones--;
                }
                left++;
            }
            if(ones==k){
                while(left<=right&&s[left]=='0'){
                    left++;
                }
                string curr=s.substr(left,right-left+1);
                if(ans.empty()){
                    ans=curr;
                }
                else if(curr.size()<ans.size()){
                    ans=curr;
                }
                else if(ans.size()==curr.size()&&curr<ans){
                    ans=curr;
                }
            }
        }
        return ans;
    }
};