class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>ans;
        for(auto s:words){
            string curr=s;
            sort(curr.begin(),curr.end());
            if(ans.empty()){
                ans.push_back(s);
                continue;
            }
            string prev=ans.back();
            sort(prev.begin(),prev.end());
            if(curr!=prev){
                ans.push_back(s);
            }
        }
        return ans;
    }
};