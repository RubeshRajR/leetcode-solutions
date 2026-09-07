class Solution {
public:
    int distinctSubseqII(string s) {
        int n=s.size();
        const long long MOD=1e9+7;
        vector<int> last(26, 0);
        vector<long long>dp(n+1,0);
        for(int i=1;i<=n;i++){
            char c=s[i-1];
            dp[i]=2*dp[i-1]+1;
            if(last[c-'a']!=0){
                dp[i]-=dp[last[c-'a']-1]+1;
            }
            dp[i] = (dp[i] % MOD + MOD) % MOD;
            last[c-'a']=i;
        }
        return dp[n];
    }
};