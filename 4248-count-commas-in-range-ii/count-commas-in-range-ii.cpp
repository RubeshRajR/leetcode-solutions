class Solution {
public:
    long long countCommas(long long n) {
        long long ans=0;
        long long count=1;
        long long start=1000;
        while(start<=n){
            long long end=min(n,n*1000-1);
            ans+=(end-start+1)*count;
            start*=1000;
        }
        return ans;
    }
};