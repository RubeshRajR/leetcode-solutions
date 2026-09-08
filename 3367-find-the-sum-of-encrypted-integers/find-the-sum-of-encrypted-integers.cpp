class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        vector<int>ans;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int maxi=0;
            int x=nums[i];
            int count=0;
            while(x>0){
                int digit=x%10;
                maxi=max(maxi,digit);
                count++;
                x=x/10;
            }
            int s=0;
            for(int i=0;i<count;i++){
                s=s*10+maxi;
            }
            sum+=s;
        }
        return sum;
    }
};