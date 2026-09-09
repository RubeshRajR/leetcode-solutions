class Solution {
public:
    int maxDigitRange(vector<int>& nums) {

        int maxRange = -1;
        int ans = 0;

        for (int num : nums) {

            int temp = num;

            int mini = INT_MAX;
            int maxi = INT_MIN;

            // Special case for number 0
            if (temp == 0) {
                mini = maxi = 0;
            }

            // Find minimum and maximum digit
            while (temp > 0) {

                int digit = temp % 10;

                mini = min(mini, digit);
                maxi = max(maxi, digit);

                // VERY IMPORTANT:
                // Remove the last digit
                temp /= 10;
            }

            // Example:
            // num = 456
            // mini = 4, maxi = 6
            // range = 6 - 4 = 2

            int range = maxi - mini;


            // CASE 1:
            // We found a NEW maximum range.
            if (range > maxRange) {

                maxRange = range;

                // Previous numbers had smaller range,
                // so they are no longer useful.
                //
                // Therefore, RESET ans to current number.
                ans = num;
            }


            // CASE 2:
            // Current number has the SAME maximum range.
            else if (range == maxRange) {

                // Current number also belongs to the answer.
                // So ADD it to ans.
                ans += num;
            }

            /*
                Example:

                nums = {123, 456, 111, 909}

                123 -> range = 2
                    maxRange = 2
                    ans = 123

                456 -> range = 2
                    same maximum
                    ans = 123 + 456
                        = 579

                111 -> range = 0
                    smaller than maxRange
                    ans remains 579

                909 -> range = 9
                    NEW maximum!
                    Previous ans (579) is useless now.
                    So RESET:
                    ans = 909

                Final:
                maxRange = 9
                ans = 909
            */
        }

        return ans;
    }
};
