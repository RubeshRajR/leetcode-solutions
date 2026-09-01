class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        vector<int>a(n+1,0);
        for(int i=0;i<n;i++){
            a[i+1]=a[i]+nums[i];
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            int left=a[i+1];
            int right=a[n]-a[i+1];
            int diff=left-right;
            if(diff%2==0){
                ans++;
            }
        }
        return ans;
    }
};