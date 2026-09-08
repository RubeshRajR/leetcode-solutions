class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        vector<int>ans;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int maxi=INT_MIN;
            int x=nums[i];
            int count=0;
            while(x>0){
                int digit=x%10;
                if(digit>maxi){
                    maxi=digit;
                }
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