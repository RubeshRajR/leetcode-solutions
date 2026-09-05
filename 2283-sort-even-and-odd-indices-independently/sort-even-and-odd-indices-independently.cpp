class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>odd;
        vector<int>even;
        for(int i=1;i<nums.size();i+=2){
            odd.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i+=2){
            even.push_back(nums[i]);
        }
        sort(odd.rbegin(),odd.rend());
        sort(even.begin(),even.end());
        int k=0,z=0;
        for(int i=1;i<nums.size();i+=2){
            nums[i]=odd[k++];
        }
        for(int i=0;i<nums.size();i+=2){
            nums[i]=even[z++];
        }
        return nums;
    }
};