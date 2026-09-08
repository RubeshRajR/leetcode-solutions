class Solution {
public:
    int countCommas(int n) {
        int ans=0;
        int count=1;
        int start=1000;
        while(start<=n){
            int end=min(n,start*1000-1);
            ans+=(end-start+1)*count;
            start*=1000;
            count++;
        }
        return ans;
    }
};