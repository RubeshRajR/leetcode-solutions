class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans="";
        vector<int>pos;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')
            pos.push_back(i);
        }
        if(pos.size()<k){
            return "";;
        }
        for(int i=0;i+k-1<pos.size();i++){
            int start=pos[i];
            int end=pos[i+k-1];
            string curr=s.substr(start,end-start+1);
            if(ans.empty()||curr.size()<ans.size()||(ans.size()==curr.size()&&curr<ans)){
                ans=curr;
            }
        }
        return ans;
    }
};