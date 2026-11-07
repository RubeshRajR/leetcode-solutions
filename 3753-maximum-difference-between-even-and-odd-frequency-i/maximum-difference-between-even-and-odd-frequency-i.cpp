class Solution {
public:
    int maxDifference(string s) {
        int freq[26]={0};
        for(char ch:s){
            freq[ch-'a']++;
        }
        int maxodd=INT_MIN;
        int mineven=INT_MAX;
        for(int p:freq){
            if(p>0){

            if(p%2!=0){
                maxodd=max(maxodd,p);
            }
            else{
                mineven=min(mineven,p);
            }
            }
        }
        return maxodd-mineven;
    }
};