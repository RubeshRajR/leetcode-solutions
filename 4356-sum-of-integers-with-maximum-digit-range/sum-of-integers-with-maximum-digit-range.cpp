class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int ans = 0;
        vector<pair<int, int>> p;
        int maxRange = 0;

        for (int i = 0; i < nums.size(); i++) {
            int temp = nums[i];
            int mini = INT_MAX;
            int maxi = INT_MIN;
            if (temp == 0) {
                mini = maxi = 0;
            }
            while (temp > 0) {
                int digit = temp % 10;

                if (digit > maxi)
                    maxi = digit;

                if (digit < mini)
                    mini = digit;
                temp /= 10; 
            }
            int range = maxi - mini;
            p.push_back({nums[i], range});
            if (range > maxRange) {
                maxRange = range;
            }
        }
        for (auto a : p) {
            if (a.second == maxRange) {
                ans += a.first;
            }
        }

        return ans;
    }
};