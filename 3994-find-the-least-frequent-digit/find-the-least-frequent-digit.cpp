class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int,int>mp;
        while(n>0){
            int digit=n%10;
            mp[digit]++;
            n=n/10;
        }
        int ans=-1;
        int mini=INT_MAX;
        // for(auto &p:mp){
        //     if(p.second<mini||(p.second==mini&&p.first<ans)){
        //         ans=p.first;
        //         mini=p.second;
        //     }
        // }
        // return ans;
         for (auto &[digit, freq] : mp) {
            if (freq < mini || (freq == mini && digit < ans)) {
                mini = freq;
                ans = digit;
            }
        }
        return ans;
    }
};