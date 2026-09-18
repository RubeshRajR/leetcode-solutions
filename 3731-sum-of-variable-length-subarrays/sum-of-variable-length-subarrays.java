class Solution {
    public int subarraySum(int[] nums) {
        int sum = 0;
        for(int i=0; i<nums.length; i++)
        {
            int start = Math.max(0, i-nums[i]);
            int total = 0;

            for(int j=start; j<=i; j++) { total+=nums[j]; }

            sum+=total;
        }
        return sum;
    }
}