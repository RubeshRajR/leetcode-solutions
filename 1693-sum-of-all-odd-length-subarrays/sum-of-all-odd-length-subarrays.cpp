class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans=0;
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            int left=i+1;
            int right=n-i;
            int total=left*right;
            int count=(total+1)/2;
            ans+=arr[i]*count;
        }
        return ans;
    }
};