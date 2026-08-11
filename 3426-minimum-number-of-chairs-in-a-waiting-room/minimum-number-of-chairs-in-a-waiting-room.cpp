class Solution {
public:
    int minimumChairs(string s) {
        int c=0;
        int ans=0;
        for(char ch:s){
            if(ch=='E'){
                c++;
                ans=max(ans,c);
            }
            else{
                c--;
            }
        }
        return ans;
    }
};